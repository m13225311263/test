//
// Created by VickuGu on 2018/8/16.
//

#ifndef LIMITORDERBOOK_TRADER_H
#define LIMITORDERBOOK_TRADER_H

#include <memory>
#include "market.h"

namespace ts {
    class Trader {
    public :
        Trader(int trader_id);
        virtual ~Trader() = default;
    protected:
        void init();
        void place_order(const Order &order);
        void cancel_order();
        void get_information();
        int get_trader_id() const;

    private:
        int trader_id;

    };
}


#endif //LIMITORDERBOOK_TRADER_H
