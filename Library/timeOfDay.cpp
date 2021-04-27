// timeOfDay.cpp

#include "date.h"
#include <iostream>

int main() {
     using namespace date;                                                            
     using namespace std::chrono_literals; 

     std::cout << std::boolalpha << '\n';
    
     auto timeOfDay = date::hh_mm_ss(10.5h + 98min + 2020s + 0.5s);                    
    
     std::cout<< "timeOfDay: " << timeOfDay << '\n';                             

     std::cout << '\n';

     std::cout << "timeOfDay.hours(): " << timeOfDay.hours() << '\n';            
     std::cout << "timeOfDay.minutes(): " << timeOfDay.minutes() << '\n';         
     std::cout << "timeOfDay.seconds(): " << timeOfDay.seconds() << '\n';         
     std::cout << "timeOfDay.subseconds(): " << timeOfDay.subseconds() << '\n';   
     std::cout << "timeOfDay.to_duration(): " << timeOfDay.to_duration() << '\n'; 

     std::cout << '\n';

     std::cout << "date::hh_mm_ss(45700.5s): " << date::hh_mm_ss(45700.5s) << '\n'; 

     std::cout << '\n';

     std::cout << "date::is_am(5h): " << date::is_am(5h) << '\n';                     
     std::cout << "date::is_am(15h): " << date::is_am(15h) << '\n';              

     std::cout << '\n';
     
     std::cout << "date::make12(5h): " << date::make12(5h) << '\n';                 
     std::cout << "date::make12(15h): " << date::make12(15h) << '\n';             

}