// mapRanges.cpp

#include <iostream>
#include <list>
#include <ranges>
#include <string>
#include <vector>
#include <utility>


template <typename Func, typename Seq>
auto map(Func func, const Seq& seq) {
    
    typedef typename Seq::value_type value_type;
    using return_type = decltype(func(std::declval<value_type>()));     

    std::vector<return_type> result{};
    for (auto i :seq | std::views::transform(func)) result.push_back(i);
    
    return result;
}

int main() {
    
    std::cout << '\n';

    std::list<int> myInts{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto res = map([](int i){ return i * i; }, myInts);          
    
    for (auto v: res) std::cout << v << " ";
    
    std::cout << "\n\n";
                                                                        
    std::vector<std::string> myStrings{"Only", "for", "testing", "purposes"};
    auto res2 = map([](const std::string& s){ return std::make_pair(s.size(), s); }, myStrings);
    
    for (auto p: res2) std::cout << "(" <<  p.first << ", " << p.second << ") " ;
    
    std::cout << "\n\n";
                                                                          
}