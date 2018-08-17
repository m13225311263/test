//
// Created by VickuGu on 2018/8/17.
//

#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>
#include "helperfuns.h"
#include "csv.h"

namespace ts{
    using namespace std;
    using namespace std::chrono;
    using time_point =  std::chrono::system_clock::time_point;


    string get_date(){
        struct tm *timeinfo;
        time_t raw_time;
        time(&raw_time);
        timeinfo = localtime(&raw_time);
        char date_raw[9];
        snprintf(date_raw, sizeof(date_raw),"%04d%02d%02d",1900+timeinfo->tm_year,timeinfo->tm_mon+1,timeinfo->tm_mday);
        string date_str(date_raw);
        return date_str;
    }

    time_point string_to_timepoint(const string &str) {
        time_t now = time(nullptr);
        tm t = *localtime(&now);
        istringstream(str) >> get_time(&t, "%H:%M:%S");
        return system_clock::from_time_t(mktime(&t));
    }
    string timepoint_to_string(time_point tp) {
        time_t tt = system_clock::to_time_t(tp);
        ostringstream oss;
        oss << put_time(localtime(&tt), "%T");
        return oss.str();
    }
}