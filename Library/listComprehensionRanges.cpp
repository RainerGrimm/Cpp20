// listComprehensionRanges.cpp

#include <algorithm>
#include <cctype>
#include <functional>
#include <iostream>
#include <ranges>
#include <string>
#include <vector>
#include <utility>

template <typename T>
struct AlwaysTrue {                       
    constexpr bool operator()(const T&) const {
        return true;
    }
};
                                       
template <typename Map, typename Seq, typename Filt = AlwaysTrue<typename Seq::value_type>>
auto mapFilter(Map map, Seq seq, Filt filt = Filt()) {
    
    typedef typename Seq::value_type value_type;
    using return_type = decltype(map(std::declval<value_type>()));  

    std::vector<return_type> result{};
    for (auto i :seq | std::views::filter(filt) 
                     | std::views::transform(map)) result.push_back(i);
    return result;
}

int main() {
    
    std::cout << '\n';

    std::vector myInts{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto res = mapFilter([](int i){ return i * i; }, myInts);
    for (auto v: res) std::cout << v << " ";

    std::cout << "\n\n";
                                          
    res = mapFilter([](int i){ return i * i; }, myInts, 
                    [](auto i){ return i % 2 == 1; });
    for (auto v: res) std::cout << v << " ";
    
    std::cout << "\n\n";
    
    std::vector<std::string> myStrings{"Only", "for", "testing", "purposes"};
    auto res2 = mapFilter([](const std::string& s){ return std::make_pair(s.size(), s); }, myStrings);
    for (auto p: res2) std::cout << "(" <<  p.first << ", " << p.second << ") " ;

    std::cout << "\n\n";
                              
    myStrings = {"Only", "for", "testing", "purposes"};
    res2 = mapFilter([](const std::string& s){ return std::make_pair(s.size(), s); }, myStrings, 
                     [](const std::string& word){ return std::isupper(word[0]); });
    
    for (auto p: res2) std::cout << "(" <<  p.first << ", " << p.second << ") " ;
    
    std::cout << "\n\n";

}