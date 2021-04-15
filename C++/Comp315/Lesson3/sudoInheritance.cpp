#include <iostream>
#include <string>

class Vehicle{
    public:
        std::string idnumber;
        virtual std::string gettype() = 0;
        virtual std::string idnumber(){
            return idnumber;
        }
};

class Car{
    public:
        Car(std::string idnumber){
            this->idnumber = idnumber;
        }
        virtual std::string gettype(){
            return "Car";
        }
};

class Plane{
        virtual std::string gettype(){
            return "Plane";
        }
        virtual std::string idnumber(){
            return "[NA]";
        }
};

void printVehicle(Vehicle &v){
    std::cout << v.gettype() << ": " << v.idnumber();
}

int main(){
    Car c1("AB 123");
    Plane p;
    printVehicle(c1);
    printVehicle(p);

    std::cin.get();
}