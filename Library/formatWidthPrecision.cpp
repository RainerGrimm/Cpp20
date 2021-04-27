// formatWidthPrecision.cpp

#include <fmt/core.h>
#include <iostream>
#include <string>

int main() {

    int i = 123456789;
    double d = 123.456789;

    std::cout << "---" << fmt::format("{}", i) << "---\n";
    std::cout << "---" << fmt::format("{:15}", i) << "---\n";   // (w = 15)
    std::cout << "---" << fmt::format("{:}", i, 15) << "---\n"; // (w = 15)

    std::cout << '\n';

    std::cout << "---" << fmt::format("{}", d) << "---\n";    
    std::cout << "---" << fmt::format("{:15}", d) << "---\n";    // (w = 15)
    std::cout << "---" << fmt::format("{:}", d, 15) << "---\n";  // (w = 15)

    std::cout << '\n';

    std::string s= "Only a test";

    std::cout << "---" << fmt::format("{:10.50}", d) << "---\n"; // (w = 50, p = 50)
    std::cout << "---" << fmt::format("{:{}.{}}", d, 10, 50) << "---\n";  // (w = 50, 
                                                                         //  p = 50)
    std::cout << "---" << fmt::format("{:10.5}", d) << "---\n";  // (w = 10, p = 5)
    std::cout << "---" << fmt::format("{:{}.{}}", d, 10, 5) << "---\n";  // (w = 10,
                                                                         //  p = 5)

    std::cout << '\n';

    std::cout << "---" << fmt::format("{:.500}", s) << "---\n";      // (p = 500)
    std::cout << "---" << fmt::format("{:.{}}", s, 500) << "---\n";  // (p = 500)
    std::cout << "---" << fmt::format("{:.5}", s) << "---\n";        // (p = 5)

}