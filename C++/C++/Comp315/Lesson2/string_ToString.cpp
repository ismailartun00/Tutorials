#include <iostream>
#include <string>

int main(){
    std::string hello = "Hello World!";
    
    hello.replace(6, 5, std::to_string(3.1415));
    std::cout << hello << std::endl;

    std::cin.get();
}