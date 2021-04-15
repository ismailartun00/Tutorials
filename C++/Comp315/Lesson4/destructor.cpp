//destructor return  gördükten sonra programımız tamamen bittiğinde çalışır.
#include <iostream>

class Nokta{
    private:
        int x, y;
    public:
        int* z;
        Nokta(){
            x = 0;
            y = 0;
            z = new int(5);
            std::cout << "Parametresiz kurucu" << x << " " << y << std::endl;
        }
        Nokta(int x, int y){
            this->x = x;
            this->y = y;
            std::cout << "Parametreli kurucu" << x << " " << y << std::endl;
            z = new int(6);
        }
        ~Nokta(){
            delete z;
            std::cout << "Yikici calsti" << x << " " << y << std::endl;
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
    Nokta n1(1,2);
    Nokta n2(3,4);

    return 0;
}