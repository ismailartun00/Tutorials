//What is Copy ?
/*#include <iostream>
#include <string>
struct Vector2{
    float x, y;
};

int main(){
    Vector2 a = {2, 3};
    Vector2 b = a;
    b.x = 5;

    std::cin.get();
}*/

//Kullanmamız gereken copy-constructor declaration, başka birini kullanırsak puan kırılacak.
//B(const B&)


//tek constructor kullandığımızda explicit yazılmazsa puan kırılacak.


//destructor return  gördükten sonra programımız tamamen bittiğinde çalışır.
#include <iostream>

class Nokta{
    private:
        int x, y;
    public:
        int* z;
        const int t;
        explicit Nokta() : t(0){
            x = 0;
            y = 0;
            z = new int(5);
            std::cout << "Parametresiz kurucu " << x << " " << y << std::endl;
        }
        Nokta(int x, int y, int t) : t(t){
            this->x = x;
            this->y = y;
            std::cout << "Parametreli kurucu " << x << " " << y << std::endl;
            z = new int(6);
        }
        Nokta(const Nokta& n) : t(n.t){
            x = n.x;
            y = n.y;
            z = new int(*n.z);
            std::cout << "Kopyalama kurucusu " << x << " " << y << std::endl;
        }
        ~Nokta(){
            delete z;
            std::cout << "Yikici calsti " << x << " " << y << std::endl;
        }

        int getX() const{
            return x;
        }
        int getY() const{
            return y;
        }

        void setX(int x){
            this->x = x;
        }
        void setY(int y){
            if(y>5)
                this->y = y;
            else 
                this->y = 2;
        }

        void ekranaYaz(){
            std:: cout << x << ", " << y << std::endl;
        }
        bool baslangictaMi(){
            return x==0 & y==0;
        }
};
int main(){
    Nokta n1;
    Nokta n2(3, 4, 5);
    //Nokta n3(n2);
    Nokta n3 = n1;

    return 0;
}