// localTime.cpp

#include "date/tz.h"
#include <iostream>

int main() {

    std::cout << '\n';

    using namespace date;
 
    std::cout << "UTC  time" << '\n';             
    auto utcTime = std::chrono::system_clock::now();
    std::cout << "  " << utcTime << '\n';
    std::cout << "  " << date::floor<std::chrono::seconds>(utcTime) << '\n':

    std::cout << '\n';
    
    std::cout << "Local time" << '\n';            
    auto localTime = date::make_zoned(date::current_zone(), utcTime);
    std::cout << "  " << localTime << '\n';
    std::cout << "  " << date::floor<std::chrono::seconds>(localTime.get_local_time()) 
              << '\n';

    auto offset = localTime.get_info().offset;        
    std::cout << "  UTC offset: "  << offset << '\n';

    std::cout << '\n';

}