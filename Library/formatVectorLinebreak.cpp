// formatVectorLinebreak.cpp

#include <algorithm>
#include <iostream>
#include <limits>
#include <numeric>
#include <fmt/format.h>
#include <string>
#include <vector>

template <typename T>
struct fmt::formatter<std::vector<T>> {
 
    std::string systemFormatString;
    std::string userFormatString;
    int lineBreak{std::numeric_limits<int>::max()};

    auto constexpr parse(format_parse_context& ctx) {
        std::string startFormatString = "{:"; 
        std::string parseContext(std::begin(ctx), std::end(ctx));  
        auto posCurly = parseContext.find_last_of("}");
        auto posTab = parseContext.find_last_of("|");
        if (posTab == std::string::npos) { 
            systemFormatString = startFormatString + parseContext.substr(0, posCurly + 1);
        }
        else {
            systemFormatString = startFormatString + parseContext.substr(0, posTab) + "}";
            userFormatString = parseContext.substr(posTab + 1, posCurly - posTab - 1);
            lineBreak = std::stoi(userFormatString);
        }
        return std::begin(ctx) + posCurly;
    }

    template <typename FormatContext>
    auto format(const std::vector<T>& v, FormatContext& ctx) {
        auto out = ctx.out();
        auto vectorSize = v.size();
        if (vectorSize == 0) return fmt::format_to(out, "\n");
        for (int i = 1;  i < vectorSize + 1; ++i) {
            fmt::format_to(out, systemFormatString, v[i-1]);
            if ( (i % lineBreak) == 0 ) fmt::format_to(out, "\n");
        }
        return fmt::format_to(out, "\n" );
    }
    
};
    
int main() {

    std::vector<int> myInts(100);
    std::iota(myInts.begin(), myInts.end(), 1);

    std::cout << fmt::format("{:|20}", myInts);
    std::cout << '\n';
    std::cout << fmt::format("{: |20}", myInts);
    std::cout << '\n';
    std::cout << fmt::format("{:4d|20}", myInts);
    std::cout << '\n';
    std::cout << fmt::format("{:10b|8}", myInts);

}