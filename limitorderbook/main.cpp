#include <iostream>
#include  <boost/intrusive/list.hpp>
#include <algorithm>
#include "source/market.h"
#include "helperfuns.h"
#include "facktrader.h"
#include "market.h"


using namespace std;

int main() {
/*    cout << "Begin" << endl;
    auto orderBook = OrderBook::get_instance();
    auto history_orders =  addhistory();
    for_each(history_orders.begin(), history_orders.end(),[](const Order &order){
        if(order.price == 0) {
            cancel_order(order.qty);
        } else {
            place_order(order);
        }
    });*/
ts::Market market;
auto ft = make_unique<ts::FackTrader>(-1);
ft->eastablish_fack_orderlists("../data/order_20180802_000002.csv");
ft->auto_place_order();


    return 0;
}