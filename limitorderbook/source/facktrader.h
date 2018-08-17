//
// Created by VickuGu on 2018/8/16.
//

#ifndef LIMITORDERBOOK_FACKTRADER_H
#define LIMITORDERBOOK_FACKTRADER_H

#include <vector>
#include <chrono>
#include "trader.h"

namespace ts {
    class FackTrader : public Trader {
    public:
        FackTrader(int trader_id);
        ~FackTrader() = default;
    public:
        void eastablish_fack_orderlists(std::string file_address);
        void auto_place_order();

    private:
        std::vector<std::pair<std::chrono::system_clock::time_point,Order>> fack_order_lists;


    };
}
#endif //LIMITORDERBOOK_FACKTRADER_H
