#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>
#include <algorithm>

int main(){
    std::vector<int> hello;
    hello.resize(26);

    std::generate(begin(hello), end(hello), [](){
        return rand()%100;
    });

    for(auto x : hello)
        std::cout << x << std::endl;
    std::cout << std::endl;
    
    auto it = std::min_element(begin(hello), end(hello));
    std::cout << (it - begin(hello)) << std::endl;  //index
    std::cout << *it << std::endl;  //value

    std::cin.get();
}