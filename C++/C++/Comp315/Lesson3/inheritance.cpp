//TOPIC: Inheritance In C++ (Core feature of OOPS in C++)

//Q. WHAT IT DOES??
//A. It inherits the features/properties/characteristics of Base class into Derived class.
//   a. Code Re-usability

//TERMINOLOGY: Base/Derived  OR  Parent/Child

//TYPES OF INHERITANCE:
//1. Single
//   A derived class with only one base class is called single inheritance.
//2. Multilevel
//   A derived class with a base class and that base class is a derived class of another, is called multilevel inheritance.
//3. Multiple
//   A derived class with multiple base class is called multiple inheritance.
//4. Hierarchical
//   Multiple derived classes with same base class is called hierarchical inheritance.
//5. Hybrid
//   Combination of multiple and hierarchical inheritance is called hybrid inheritance.
//6. Multipath
//   A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.

//MODES OF INHERITANCE
//1. public  (Visible to everyone)
//2. protected (Visible to current class and derived class only)
//3. private (Visible to current class only)

//---------------------------------------------------------------
//BASE CLASS | DERIVED CLASS    DERIVED CLASS   DERIVED CLASS   |
//---------------------------------------------------------------
//           | Public MODE      Private MODE    Protected MODE  |
//---------------------------------------------------------------
//Prvate     | Not Inherited    Not Inherited   Not Inherited   |
//Protected  | Protected        Private         Protected       |
//Public     | Public           Private         Protected       |
//---------------------------------------------------------------


//------------------Example------------------
/*
#include <bits/stdc++.h> 
using namespace std; 
//Base class 
class Parent { 
    public: 
      int id_p; 
}; 
// Sub class inheriting from Base Class(Parent) 
class Child : public Parent{ 
    public: 
      int id_c; 
}; 
//main function 
int main(){        
    Child obj1; 
    // An object of class child has all data members 
    // and member functions of class parent 
    obj1.id_c = 7; 
    obj1.id_p = 91; 
    cout << "Child id is " <<  obj1.id_c << endl; 
    cout << "Parent id is " <<  obj1.id_p << endl; 
    return 0; 
}
*/

//------------------Modes------------------
  /*
  class A  
{ 
public: 
    int x; 
protected: 
    int y; 
private: 
    int z; 
}; 
  
class B : public A 
{ 
    // x is public 
    // y is protected 
    // z is not accessible from B 
}; 
  
class C : protected A 
{ 
    // x is protected 
    // y is protected 
    // z is not accessible from C 
}; 
  
class D : private A    // 'private' is default for classes 
{ 
    // x is private 
    // y is private 
    // z is not accessible from D 
}; 
*/

//------------------Single------------------
/*
#include <iostream> 
using namespace std; 
// base class 
class Vehicle { 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
// sub class derived from two base classes 
class Car: public Vehicle{

}; 
// main function 
int main(){    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    Car obj; 
    return 0; 
} 
*/

//------------------Multiple------------------
/*
#include <iostream> 
using namespace std; 
// first base class 
class Vehicle{ 
  public: 
    Vehicle(){ 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
// second base class 
class FourWheeler { 
  public: 
    FourWheeler() 
    { 
      cout << "This is a 4 wheeler Vehicle" << endl; 
    } 
}; 
// sub class derived from two base classes 
class Car: public Vehicle, public FourWheeler { 
  
}; 
// main function 
int main() {    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    Car obj; 
    return 0; 
}
*/

//------------------Multilevel------------------
/*
#include <iostream> 
using namespace std; 
// base class 
class Vehicle{ 
  public: 
    Vehicle(){ 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
class fourWheeler: public Vehicle{  
   public: 
    fourWheeler(){ 
      cout<<"Objects with 4 wheels are vehicles"<<endl; 
    } 
}; 
// sub class derived from two base classes 
class Car: public fourWheeler{ 
   public: 
     car(){ 
       cout<<"Car has 4 Wheels"<<endl; 
     } 
}; 
// main function 
int main() {    
    //creating object of sub class will 
    //invoke the constructor of base classes 
    Car obj; 
    return 0; 
}
*/

//------------------Hierarchical------------------
/*
#include <iostream> 
using namespace std; 
// base class 
class Vehicle{ 
  public: 
    Vehicle(){ 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
// first sub class  
class Car: public Vehicle{ 
  
}; 
// second sub class 
class Bus: public Vehicle{ 
      
}; 
// main function 
int main(){    
    // creating object of sub class will 
    // invoke the constructor of base class 
    Car obj1; 
    Bus obj2; 
    return 0; 
}
*/

//------------------Hybrid(Virtual)------------------
/*
#include <iostream> 
using namespace std;
// base class  
class Vehicle{ 
  public: 
    Vehicle(){ 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
//base class 
class Fare{ 
    public: 
    Fare(){ 
        cout<<"Fare of Vehicle\n"; 
    } 
}; 
// first sub class  
class Car: public Vehicle{ 
}; 
// second sub class 
class Bus: public Vehicle, public Fare{ 
}; 
// main function 
int main(){    
    // creating object of sub class will 
    // invoke the constructor of base class 
    Bus obj2; 
    return 0; 
}
*/

//------------------Multipath------------------
/*
#include<iostream.h> 
#include<conio.h> 
class ClassA{ 
    public: 
        int a; 
};   
class ClassB : public ClassA{ 
    public: 
        int b; 
}; 
class ClassC : public ClassA{ 
    public: 
        int c; 
}; 
class ClassD : public ClassB, public ClassC{ 
    public: 
        int d; 
};   
void main(){ 
    ClassD obj; 
    //obj.a = 10;                   //Statement 1, Error 
    //obj.a = 100;                 //Statement 2, Error   
    obj.ClassB::a = 10;        //Statement 3 
    obj.ClassC::a = 100;      //Statement 4   
    obj.b = 20; 
    obj.c = 30; 
    obj.d = 40;   
    cout<< "\n A from ClassB  : "<< obj.ClassB::a; 
    cout<< "\n A from ClassC  : "<< obj.ClassC::a; 
    cout<< "\n B : "<< obj.b; 
    cout<< "\n C : "<< obj.c; 
    cout<< "\n D : "<< obj.d; 
}
*/