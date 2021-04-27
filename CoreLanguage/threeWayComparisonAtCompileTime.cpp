// threeWayComparisonAtCompileTime.cpp

#include <compare>
#include <iostream>

struct MyDouble {
    double value;
    explicit constexpr MyDouble(double val): value{val} { }
    auto operator<=>(const MyDouble&) const = default;    
};

template <typename T>
constexpr bool isLessThan(const T& lhs, const T& rhs) {
    return lhs < rhs;
}

int main() {
    
    std::cout << std::boolalpha << '\n';
              
    constexpr MyDouble myDouble1(2011);
    constexpr MyDouble myDouble2(2014);
    
    constexpr bool res = isLessThan(myDouble1, myDouble2); // (1)
    
    std::cout << "isLessThan(myDouble1, myDouble2): "
              << res << '\n';          
              
    std::cout << '\n';
              
}