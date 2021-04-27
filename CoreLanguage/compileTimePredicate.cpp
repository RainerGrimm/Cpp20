// compileTimePredicate.cpp

#include <compare>
#include <iostream>
#include <string>
#include <vector>

struct Test{};

int main() {

    std::cout << '\n';

    std::cout << std::boolalpha;

    std::cout << "std::three_way_comparable<int>: " 
              << std::three_way_comparable<int> << "\n";

    std::cout << "std::three_way_comparable<double>: ";
    if (std::three_way_comparable<double>) std::cout << "True";
    else std::cout << "False";

    std::cout << "\n\n";

    static_assert(std::three_way_comparable<std::string>);

    std::cout << "std::three_way_comparable<Test>: ";
    if constexpr(std::three_way_comparable<Test>) std::cout << "True";
    else std::cout << "False";

    std::cout << '\n';

    std::cout << "std::three_way_comparable<std::vector<int>>: ";
    if constexpr(std::three_way_comparable<std::vector<int>>) std::cout << "True";
    else std::cout << "False";

    std::cout << '\n';
    
}