#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main(){
    //std::string hello;
    std::vector<int> hello;
    hello.resize(26);

    //std::iota(begin(hello), end(hello), 'a');
    std::iota(begin(hello), end(hello), 0);

    //std::cout << hello << std::endl;
    for(auto x : hello)
        std::cout << x << std::endl;

    std::cin.get();
}