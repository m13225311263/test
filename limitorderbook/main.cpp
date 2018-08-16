#include <iostream>
#include  <boost/intrusive/list.hpp>
#include <algorithm>
#include "source/market.h"
#include "source/market1.h"
#include "source/history_orders.h"


using namespace OB;
using namespace std;

int main() {
    cout << "Begin" << endl;
    auto orderBook = OrderBook::get_instance();
    auto history_orders =  addhistory();
    for_each(history_orders.begin(), history_orders.end(),[](const Order &order){
        if(order.price == 0) {
            cancel_order(order.qty);
        } else {
            place_order(order);
        }
    });

    return 0;
}