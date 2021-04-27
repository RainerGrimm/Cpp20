// cuteSyntax.cpp

#include <iostream>
#include "date.h"

int main() {

    std::cout << '\n';

    using namespace date;

    constexpr auto yearMonthDay{year(1966)/6/26};
    std::cout << yearMonthDay << '\n';

    constexpr auto dayMonthYear{day(26)/6/1966};
    std::cout << dayMonthYear << '\n';

    constexpr auto monthDayYear{month(6)/26/1966};
    std::cout << monthDayYear << '\n';

    constexpr auto yearDayMonth{year(1966)/month(26)/6};  
    std::cout << yearDayMonth << '\n';

    std::cout << '\n';

}