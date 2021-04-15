#include <iostream>
#include <vector>

auto fn(int x){
    return x * 2;
}

int main(){

    int multiplier = 2;

    auto multiplied = [&](auto num){
        return num * multiplier;
    };

    std::vector<float> vec = {4.2, 2, 7, 5, -4};

    for(auto v : vec){
        std::cout << fn(v) << std::endl;

        multiplier++;
    }

    std::cin.get();
}