//
// Created by vicky gu on 2018-08-13.
//
#include <iostream>
#include <memory>
#include "market.h"
#include "logger.h"

using namespace std;
namespace ts {


    Market *Market::get_instance() {
        static Market ob;
        return &ob;
    }


    void Market::shutdown() {
        LOG_INFO << "Market Closed !" << ENDL;

    }

    void Market::initialize() {
        askMin = kMinPrice;
        bidMax = kMaxPrice;
    }

    void Market::build_trade_report(uint64_t buyer_order_id, uint64_t seller_order_id, string sec_id, bool side,
                                    int price, uint64_t price_level_qty) {

        if (price_level_qty == 0) {
            return;
        }
      /*  Order exec = {};
        exec.sec_id = sec_id;
        exec.side = side;
        exec.qty = price_level_qty;
        exec.price = price;
        exec.trader_id = 0;*/
        string sec_str(begin(sec_id), end(sec_id));

        LOG_INFO << "|sec_id:  " << sec_str << "|side: " << side << "|qty: " << price_level_qty << "|price: " << price
                 << "|buyer: " << buyer_order_id << "|seller: " << seller_order_id << ENDL;

    }

    void Market::place_order(const Order &order) {
        int price = order.price;
        uint64_t order_qty = order.qty;
        if (order.side) { /*Buy*/
            if (price >= askMin) {
                auto price_level = price_lists.begin() + askMin;
                do {
                    auto price_level_order = price_level->begin();
                    while (price_level_order != price_level->end()) {
                        if (price_level_order->qty < order_qty) {
                            build_trade_report(order.order_id, price_level_order->order_id, order.sec_id, order.side,
                                               price, price_level_order->qty);
                            order_qty -= price_level_order->qty;
                            orderbook_lists.erase(price_level_order->order_id);
                            ++price_level_order;
                        } else {
                            build_trade_report(order.order_id, price_level_order->order_id, order.sec_id, order.side,
                                               price, order_qty);
                            if (price_level_order->qty > order_qty) {
                                price_level_order->qty -= order_qty;
                            } else {
                                ++price_level_order;
                            }
                            price_level->erase(price_level->begin(), price_level_order);
                            orderbook_lists.find(price_level_order->order_id)->second.qty = price_level_order->qty;
                            return;
                        }
                    }
                    price_level->clear();
                    price_level++;
                    askMin++;

                } while (price >= askMin);
            }
            if (bidMax < price) bidMax = price;
        } else {
            if (price <= bidMax) {
                auto price_level = price_lists.begin() + bidMax;
                do {
                    auto price_level_order = price_level->begin();
                    while (price_level_order != price_level->end()) {
                        if (price_level_order->qty < order_qty) {
                            build_trade_report(price_level_order->order_id, order.order_id, order.sec_id, order.side,
                                               price, price_level_order->qty);
                            order_qty -= price_level_order->qty;
                            orderbook_lists.erase(price_level_order->order_id);
                            ++price_level_order;
                        } else {
                            build_trade_report(price_level_order->order_id, order.order_id, order.sec_id, order.side,
                                               price, order_qty);
                            if (price_level_order->qty > order_qty) {
                                price_level_order->qty -= order_qty;
                            } else {
                                ++price_level_order;
                            }
                            price_level->erase(price_level->begin(), price_level_order);
                            orderbook_lists.find(price_level_order->order_id)->second.qty = price_level_order->qty;
                            return;
                        }
                    }
                    price_level->clear();
                    price_level--;
                    bidMax--;

                } while (price <= bidMax);
            }
            if (askMin > price) askMin = price;
        }
        auto entry = make_unique<PriceUnit>();
        entry->order_id = order.order_id;
        entry->qty = order_qty;
        entry->trader_id = order.trader_id;
        price_lists[price].push_back(*entry);
        orderbook_lists[order.order_id] = order;
        return;
    }

    void Market::cancel_order(uint64_t order_id) {
        orderbook_lists[order_id].qty = 0;

    }
}