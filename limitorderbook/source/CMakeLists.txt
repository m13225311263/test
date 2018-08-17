aux_source_directory(. DIR_SOURCE)
find_package(Boost 1.6 REQUIRED)
include_directories(${Boost_INCLUDE_IDR})
add_library(source ${DIR_SOURCE} ${Boost_INCLUDE_IDR} trader.cpp trader.h realtrader.cpp realtrader.h facktrader.cpp facktrader.h helperfuns.cpp helperfuns.h logger.h)

