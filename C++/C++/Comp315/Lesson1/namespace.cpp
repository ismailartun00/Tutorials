#include <iostream>
#include <vector>

namespace myspace{
    auto fn(std::string x){
        return x + x;
    }
}

int main(){

    std::string s = "Hello";
    std::cout << myspace::fn(s) << std::endl;


    std::cin.get();
}