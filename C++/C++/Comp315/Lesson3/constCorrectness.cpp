#include <iostream>
#include <string>
int main(){
    const int MAX_AGE = 90;

    int* a = new int;
    //const int* a = new int;
    //int const* a = new int; //same of up one
    //???//int* const a = new int; //adresini değiştiremeyiz.
    
    *a = 2;
    a = (int*)&MAX_AGE;

    std::cout << *a << std::endl;


    //burada içeriği ve ulaşabildiğimiz yerlerde ne olursa olsun değiştiremeyiz.
    /*int getY() const{
        return y;
    }*/

    //gelen x değerini değiştiremeyiz.
    /*void setX(const int x){
        this->x = x;
    }*/

    //???? , ???class içerisindeki fonksyonlarda sadece kullanılabilir.
    /*const int getY(){
        return y;
    }*/

    std::cin.get();
}

