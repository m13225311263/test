//
// Created by Rong Zhou on 2018-08-13.
//

#ifndef LIMITORDERBOOK_HISTORY_ORDERS_H
#define LIMITORDERBOOK_HISTORY_ORDERS_H

#include <vector>
#include "market.h"

std::vector<ts::Order>& addhistory ( ) {

    ts::Order order = {"000002", 1, 1320, 1000,1};
    ts::Order order1 = {"000002", 0, 1312, 300,2};

    static std::vector<ts::Order> history_orders;
    history_orders.push_back(order);
    history_orders.push_back(order1);
    return history_orders;

}

#endif //LIMITORDERBOOK_HISTORY_ORDERS_H
