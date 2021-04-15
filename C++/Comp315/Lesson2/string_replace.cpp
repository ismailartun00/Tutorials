#include <iostream>
#include <string>

int main(){
    std::string hello = "Hello World!";
    
    hello.replace(6, 5, "Ismail");
    std::cout << hello << std::endl;

    std::cin.get();
}