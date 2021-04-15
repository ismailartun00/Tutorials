#include <iostream>

//inline programın daha hızlı çalışmasını sağlar ve küçük fonksiyonların çok kullanıldığı yerlerde kullanılır.
inline void PrintMe(std::string str){
    std::cout << str << std::endl;
}

int main(){
    for(int i = 0; i < 10000; i++){
        PrintMe("Ismail");
    }
}