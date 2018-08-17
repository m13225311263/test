//
// Created by VickuGu on 2018/8/17.
//

#ifndef LIMITORDERBOOK_LOGGER_H
#define LIMITORDERBOOK_LOGGER_H

#include <iostream>

namespace ts {
    static constexpr char BLACK[]{"\033[1;30m"};
    static constexpr char RED[]{"\033[1;31m"};
    static constexpr char GREEN[]{"\033[1;32m"};
    static constexpr char YELLOW[]{"\033[1;33m"};
    static constexpr char BLUE[]{"\033[1;34m"};
    static constexpr char NORMAL[]{"\033[0;39m"};

#define LOG_DEBUG std::cout << BLACK << "DEBUG" << NORMAL << " - "
#define LOG_INFO std::cout << BLUE << "INFO" << NORMAL << " - "
#define LOG_WARN std::cout << YELLOW << "WARN" << NORMAL << " - "
#define LOG_ERROR std::cout << RED << "ERROR" << NORMAL << " - "
#define ENDL GREEN << ' ' <<  __FILE__ << " | " << __LINE__ << NORMAL << std::endl
    
}

#endif //LIMITORDERBOOK_LOGGER_H
