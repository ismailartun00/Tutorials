#include <iostream>
class Hayvan{
    public:        
        void turIsmi(){std::cout << "Tür ismi: Hayvan" << std::endl;};
};
 
class Aslan: public Hayvan{
    public:
        void turIsmi() {std::cout << "Tür ismi: Aslan" << std::endl;};
};
 
int main(int argc, char** argv){
Hayvan *h1 = new Hayvan();
Hayvan *h2 = new Aslan();
 
Aslan *h3;
 
h3 = static_cast<Aslan*>(h1);
 
h3->turIsmi();
delete(h1);
delete(h2);
 
return 0;
}