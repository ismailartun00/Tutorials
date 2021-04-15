#include <iostream>
#include <vector>

int main(){
    auto x = 5;
    auto y = "ismail";
    auto z = 5.8;
    //error  --->  auto a;
    auto b = 2.5f;
    auto c = 'i';
    auto d = x;

    std::cout << x << "\t" << z << "\t" << y << std::endl;

    std::cin.get();
}