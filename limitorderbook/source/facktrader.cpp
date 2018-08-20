//
// Created by VickuGu on 2018/8/16.
//
#include "facktrader.h"
#include "csv.h"
#include "helperfuns.h"
#include "logger.h"

namespace ts {
    using namespace std;
    using namespace std::chrono;
    using time_point = std::chrono::system_clock::time_point;

    FackTrader::FackTrader(int trader_id) : Trader(trader_id) {

    }

    void FackTrader::eastablish_fack_orderlists(string file_address) {
        LOG_INFO << "Establishing Fack order lists ." << ENDL;
        io::CSVReader<7> in(file_address);
        in.read_header(io::ignore_extra_column, "RecvTime", "ApplSeqNum", "SecurityID", "Side", "OrderType", "Price",
                       "OrderQty");
        string recv_time;
        uint64_t order_id;
        int sec_id;
        int side;
        char ordertype;
        float price;
        uint64_t qty;
        while (in.read_row(recv_time, order_id, sec_id, side, ordertype, price, qty)) {
            char sec_tmp[7];
            Order order;
            order.trader_id = get_trader_id();
            order.order_id = order_id;
            snprintf(sec_tmp, sizeof(sec_tmp), "%06d", sec_id);
            order.sec_id = string(sec_tmp);
            order.side = side == 1;
            order.order_type = ordertype;
            order.price = (int) (price * 100);
            order.qty = qty;
            time_point tp = string_to_timepoint(recv_time.substr(8, 6));
            pair<time_point, Order> pair_tmp = make_pair(tp, order);
            fack_order_lists.emplace_back(pair_tmp);
        }
        LOG_INFO << "Established Fack order lists. " << ENDL;
    }

    void FackTrader::auto_place_order() {
        LOG_INFO << "Begin to order fack lists. " << ENDL;
        for_each(fack_order_lists.begin(), fack_order_lists.end(), [this](const pair<time_point, Order> &pair_tmp) {
            while (true) {
                if (chrono::system_clock::now() >= pair_tmp.first) {
                    //LOG_INFO << timepoint_to_string(chrono::system_clock::now())<< " | " << timepoint_to_string(pair_tmp.first) << ENDL;
                    place_order(pair_tmp.second);
                    return;
                }
            }
        });
        shutdown();
    }

}
