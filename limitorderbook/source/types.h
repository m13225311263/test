//
// Created by VickuGu on 2018/8/16.
//

#ifndef LIMITORDERBOOK_TYPES_H
#define LIMITORDERBOOK_TYPES_H


namespace ts {

    constexpr int kMaxPrice = std::numeric_limits<short>::max();
    constexpr int kMinPrice = 1;
    constexpr int secSize = 7;
    struct Order {
        int64_t order_id;
        int trader_id;
        std::array<char,secSize> sec_id;
        bool side;
        int price;
        uint64_t qty;
    };

    struct OrderBookUnit : public boost::intrusive::slist_base_hook<> {
        int64_t qty{0};
        int trader_id;

    };
    typedef boost::intrusive::slist<OrderBookUnit, boost::intrusive::cache_last<true>> PriceUnit;

}
#endif //LIMITORDERBOOK_TYPES_H
