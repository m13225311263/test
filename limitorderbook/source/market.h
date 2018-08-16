//
// Created by Rong Zhou on 2018-08-13.
//

#ifndef LIMITORDERBOOK_ORDERBOOK_H
#define LIMITORDERBOOK_ORDERBOOK_H
#include <cstdint>
#include <limits>
#include <array>
#include <boost/intrusive/slist.hpp>
#include "types.h"
namespace ts {

    class Market {
    public:
        Market();

        ~Market() = default;

    public:
        static Market* get_instance();

        void shutdown();

        void initialize();

        void build_trade_report(int buyer, int seller, std::array<char,secSize> sec_id, bool side, int price, uint64_t price_level_qty);

        uint64_t place_order(const Order &order);

        void cancel_order(uint64_t order_id);

    private:

        std::array<OrderBookUnit, kMaxPrice> orderbook_lists;
        std::array<PriceUnit, kMaxPrice> price_lists;
        uint64_t order_id;
        int askMin;
        int bidMax;
    };
}

#endif //LIMITORDERBOOK_ORDERBOOK_H
