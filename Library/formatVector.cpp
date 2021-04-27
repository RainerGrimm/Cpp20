// formatVector.cpp

#include <iostream>
#include <fmt/format.h>
#include <string>
#include <vector>

template <typename T>
struct fmt::formatter<std::vector<T>> {
 
    std::string formatString;

    auto constexpr parse(format_parse_context& ctx) {
        formatString = "{:"; 
        std::string parseContext(std::begin(ctx), std::end(ctx));  
        formatString += parseContext; 
        return std::end(ctx) - 1;
    }

    template <typename FormatContext>
    auto format(const std::vector<T>& v, FormatContext& ctx) {
        auto out= ctx.out();
        fmt::format_to(out, "[");
        if (v.size() > 0) fmt::format_to(out, formatString, v[0]);
        for (int i= 1; i < v.size(); ++i) fmt::format_to(out, ", " + formatString, v[i]);
        fmt::format_to(out, "]");
        return fmt::format_to(out, "\n" );
    }
    
};
    
int main() {

    std::vector<int> myInts{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << fmt::format("{:}", myInts);
    std::cout << fmt::format("{:+}", myInts);
    std::cout << fmt::format("{:03d}", myInts);
    std::cout << fmt::format("{:b}", myInts);

    std::cout << '\n';

    std::vector<std::string> myStrings{"Only", "for", "testing", "purpose"};
    std::cout << fmt::format("{:}", myStrings);
    std::cout << fmt::format("{:.3}", myStrings);

}