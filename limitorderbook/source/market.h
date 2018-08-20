//
// Created by Rong Zhou on 2018-08-13.
//

#ifndef LIMITORDERBOOK_ORDERBOOK_H
#define LIMITORDERBOOK_ORDERBOOK_H
#include <cstdint>
#include <limits>
#include <array>
#include <boost/intrusive/slist.hpp>
#include <vector>
#include <map>
#include <memory>
#include "types.h"
namespace ts {

    class Market {
    public:
        Market() = default;

        ~Market() = default;

    public:
        static Market* get_instance();

        void shutdown();

        void initialize();

        void build_trade_report(uint64_t buyer_order_id, uint64_t seller_order_id, std::string sec_id, bool side, int price, uint64_t price_level_qty);

        void place_order(const Order &order);

        void cancel_order(uint64_t order_id);

    private:


    private:

        std::map<uint64_t, Order> orderbook_lists;
        std::array<std::vector<PriceUnit>, kMaxPrice> price_lists;
        int askMin;
        int bidMax;
    };
}

#endif //LIMITORDERBOOK_ORDERBOOK_H
