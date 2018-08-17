//
// Created by VickuGu on 2018/8/17.
//

#ifndef LIMITORDERBOOK_HELPERFUNS_H
#define LIMITORDERBOOK_HELPERFUNS_H

#include <string>
#include <chrono>

namespace ts {
    void read_csv(std::string file_address);
    std::chrono::system_clock::time_point string_to_timepoint(const std::string &str);
    std::string timepoint_to_string(std::chrono::system_clock::time_point time_point);
}

#endif //LIMITORDERBOOK_HELPERFUNS_H
