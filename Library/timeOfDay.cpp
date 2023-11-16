// timeOfDay.cpp

#include <chrono>
#include <iostream>

int main() {

    using namespace std::chrono_literals;

    std::cout << std::boolalpha << '\n';

    auto timeOfDay = std::chrono::hh_mm_ss(10.5h + 98min + 2020s + 0.5s);

    std::cout<< "timeOfDay: " << timeOfDay << '\n';

    std::cout << '\n';

    std::cout << "timeOfDay.hours(): " << timeOfDay.hours() << '\n';
    std::cout << "timeOfDay.minutes(): " << timeOfDay.minutes() << '\n';
    std::cout << "timeOfDay.seconds(): " << timeOfDay.seconds() << '\n';
    std::cout << "timeOfDay.subseconds(): " << timeOfDay.subseconds() << '\n';
    std::cout << "timeOfDay.to_duration(): " << timeOfDay.to_duration() << '\n';

    std::cout << '\n';

    std::cout << "std::chrono::hh_mm_ss(45700.5s): "
              << std::chrono::hh_mm_ss(45700.5s) << '\n';

    std::cout << '\n';

    std::cout << "std::chrono::is_am(5h): " << std::chrono::is_am(5h) << '\n';
    std::cout << "std::chrono::is_am(15h): " << std::chrono::is_am(15h) << '\n';

    std::cout << '\n';

    std::cout << "std::chrono::make12(5h): " << std::chrono::make12(5h) << '\n';
    std::cout << "std::chrono::make12(15h): " << std::chrono::make12(15h) << '\n';

    std::cout << '\n';

}
