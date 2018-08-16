//
// Created by Rong Zhou on 2018-08-13.
//

#include "market.h"
#include <iostream>

using namespace std;
namespace ts {


    Market* Market::get_instance() {
        static Market ob;
        return &ob;
    }

    Market::Market() {
        cout << "construct" << endl;
    }

    void Market::shutdown() {

    }

    void Market::initialize() {
        askMin = kMinPrice;
        bidMax = kMaxPrice;
    }

    void Market::build_trade_report(int buyer, int seller, array<char,secSize> sec_id, bool side, int price, uint64_t price_level_qty) {
        Order exec ={};
        if (price_level_qty == 0) {
            return;
        }

        exec.sec_id = sec_id;
        exec.side = side;
        exec.qty = price_level_qty;
        exec.price = price;
        exec.trader_id = 0;
        string sec_str(begin(sec_id), end(sec_id));

        cout << "|sec_id:  " << sec_str << "|side: " << side << "|qty: " << price_level_qty << "|price: " << price
        << "|buyer: " << buyer << "|seller: " << seller << endl;

    }

    uint64_t Market::place_order(const Order &order) {
        cout << "In place_order " << endl;
        int price = order.price;
        uint64_t order_qty = order.qty;
        if (order.side) { /*Buy*/
            if (price >= askMin) {
                auto price_level = price_lists.begin() + askMin;
                do {
                    auto price_level_entry = price_level->begin();
                    while (price_level_entry != price_level->end()) {
                        if (price_level_entry->qty < order_qty) {
                            build_trade_report(order.trader_id, price_level_entry->trader_id, order.sec_id, order.side, price, price_level_entry->qty);
                            order_qty -= price_level_entry->qty;
                            ++price_level_entry;
                        } else {
                            build_trade_report(order.trader_id, price_level_entry->trader_id,order.sec_id, order.side, price, order_qty);
                            if (price_level_entry->qty > order_qty) {
                                price_level_entry->qty -= order_qty;
                            } else {
                                ++price_level_entry;
                            }
                            price_level->erase(price_level->begin(), price_level_entry);
                        }
                        return order_id;

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
                    auto price_level_entry = price_level->begin();
                    while (price_level_entry != price_level->end()) {
                        if (price_level_entry->qty < order_qty) {
                            build_trade_report(price_level_entry->trader_id, order.trader_id, order.sec_id, order.side, price, price_level_entry->qty);
                            order_qty -= price_level_entry->qty;
                            ++price_level_entry;
                        } else {
                            build_trade_report(price_level_entry->trader_id, order.trader_id, order.sec_id, order.side, price, order_qty);
                            if (price_level_entry->qty > order_qty) {
                                price_level_entry->qty -= order_qty;
                            } else {
                                ++price_level_entry;
                            }
                            price_level->erase(price_level->begin(), price_level_entry);
                        }
                        return order_id;

                    }
                    price_level->clear();
                    price_level--;
                    bidMax--;

                } while (price <= bidMax);
            }
            if (askMin > price) askMin = price;

        }

        auto entry = orderbook_lists.begin() + (++order_id);
        entry->qty = order_qty;
        entry->trader_id = order.trader_id;
        price_lists[price].push_back(*entry);
        return order_id;
    }

    void Market::cancel_order(uint64_t order_id) {
        orderbook_lists[order_id].qty = 0;

    }
}