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

    std::cin.get();
}