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
        uint64_t order_id;
        int trader_id;
        std::string sec_id;
        bool side;
        char order_type;
        int price;
        uint64_t qty;
    };

    struct PriceUnit {
        uint64_t order_id;
        int trader_id;
        uint64_t qty;
    };
}
#endif //LIMITORDERBOOK_TYPES_H
