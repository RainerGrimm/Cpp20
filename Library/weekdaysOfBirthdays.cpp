// weekdaysOfBirthdays.cpp

#include <cstdlib>
#include <iostream>
#include "date.h"

int main() {

    std::cout << '\n';

    using namespace date;

    int y;
    int m;
    int d;

    std::cout << "Year: ";                          
    std::cin >> y;
    std::cout << "Month: ";
    std::cin >> m;
    std::cout << "Day: ";
    std::cin >> d;

    std::cout << '\n';

    auto birthday = year(y)/month(m)/day(d);       

    if (not birthday.ok()) {                       
        std::cout << birthday << '\n';
        std::exit(EXIT_FAILURE);
    }

    std::cout << "Birthday: " << birthday << '\n';
    auto birthdayWeekday = year_month_weekday(birthday);   
    std::cout << "Weekday of birthday: " << birthdayWeekday.weekday() << '\n';

    auto currentDate = year_month_day(floor<days>(std::chrono::system_clock::now()));  
    auto currentYear = currentDate.year();
    
    auto age = (int)currentDate.year() - (int)birthday.year();  
    std::cout << "Your age: " << age << '\n';

    std::cout << '\n';

    std::cout << "Weekdays for your next 10 birthdays" << '\n';  

    for (int i = 1, newYear = (int)currentYear; i <= 10;  ++i ) {  
        std::cout << "  Age " <<  ++age << '\n';
        auto newBirthday = year(++newYear)/month(m)/day(d);
        std::cout << "    Birthday: " << newBirthday << '\n';
        std::cout << "    Weekday of birthday: " 
                  << year_month_weekday(newBirthday).weekday() << '\n';
    }

    std::cout << '\n';

}