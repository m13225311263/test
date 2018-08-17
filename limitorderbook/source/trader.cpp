//
// Created by VickuGu on 2018/8/16.
//

#include "trader.h"
#include "logger.h"

using namespace ts;

Trader::Trader(int trader_id):trader_id(trader_id) {
}

void Trader::place_order(const Order &order) {
    Market::get_instance()->place_order(order);
    //LOG_INFO << "|sec_id:" << ENDL;

}

int Trader::get_trader_id() const {
    return trader_id;
}