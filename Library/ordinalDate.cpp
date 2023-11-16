// ordinalDate.cpp

#include <cassert>
#include <chrono>
#include <iomanip>
#include <iostream>

int main() {

    std::cout << '\n';

    using std::chrono::system_clock;

    using std::chrono::floor;

    using std::chrono::days;

    using std::chrono::January;

    using std::chrono::year_month_day;
    using std::chrono::sys_days;

    const auto time = system_clock::now();
    const auto daypoint = floor<days>(time);
    const auto ymd = year_month_day{daypoint};

    // calculating the year and the day of the year
    const auto year = ymd.year();
    const auto year_day = daypoint - sys_days{year/January/0};

    std::cout << year << '-' << std::setfill('0') << std::setw(3)
              << year_day.count() << '\n';

    // inverse calculation and check
    assert(ymd == year_month_day{sys_days{year/January/0} + year_day});

    std::cout << '\n';

}
