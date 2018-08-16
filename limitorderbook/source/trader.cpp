//
// Created by VickuGu on 2018/8/16.
//

#include "trader.h"

using namespace ts;

Trader::Trader(uint64_t trader_id):trader_id(trader_id) {
    market = Market::get_instance();
}

void Trader::place_order(const Order &order) {
    market->place_order(order);
}