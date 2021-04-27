// lambdaUnevaluatedContext.cpp

#include <cmath>
#include <iostream>
#include <memory>
#include <set>
#include <string>

template <typename Cont>
void printContainer(const Cont& cont) {
    for (const auto& c: cont) std::cout << c << "  ";
    std::cout << "\n";
}

int main() {
    
    std::cout << '\n';

    std::set<std::string> set1 = {"scott", "Bjarne", "Herb", "Dave", "michael"};
    printContainer(set1);
    
    using SetDecreasing = std::set<std::string, decltype([](const auto& l, const auto& r) { 
                                                             return l > r; 
                                                         })>;           
    SetDecreasing set2 = {"scott", "Bjarne", "Herb", "Dave", "michael"};
    printContainer(set2);     

    using SetLength = std::set<std::string, decltype([](const auto& l, const auto& r) { 
                                                         return l.size() < r.size(); 
                                                     })>; 
    SetLength set3 = {"scott", "Bjarne", "Herb", "Dave", "michael"};
    printContainer(set3);    

    std::cout << '\n';

    std::set<int> set4 = {-10, 5, 3, 100, 0, -25};
    printContainer(set4);

    using setAbsolute = std::set<int, decltype([](const auto& l, const auto& r) { 
                                                   return std::abs(l)< std::abs(r); 
                                               })>; 
    setAbsolute set5 = {-10, 5, 3, 100, 0, -25};
    printContainer(set5);    
    
    std::cout << "\n\n";
    
}