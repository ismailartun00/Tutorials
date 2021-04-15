//base class, inherit edilmiş class'lara convert yapılamaz, ama inherit edilmiş class, base class'a convert yapılabilir.
//Dynamic Cast genellikle referans ve gösterici için kullanılabilir.
#include <iostream>
 
using namespace std;
 
class Hayvan
{
 
public:
 
    virtual void turIsmi(){cout << "Tür ismi: Hayvan" << endl;};
};
 
class Aslan: public Hayvan
{
public:
    virtual void turIsmi() {cout << "Tür ismi: Aslan" << endl;};
 
};
 
int main(int argc, char** argv)
{
    Hayvan *h1 = new Hayvan();
    Hayvan *h2 = new Aslan(); //burda aslında gizli bir tür dönüştürme işlemi var. Yine burda da dynamic_cast operatörü kullanılabilir.
    Hayvan *h3;
 
    if ((h3 = dynamic_cast<Aslan*>(h1)) == NULL)
        cout << "h1 Aslan türüne dönüştürülemez." << endl;
 
    if ((h3 = dynamic_cast<Aslan*>(h2)) == NULL)
        cout << "h2 Aslan türüne dönüştürülemez" << endl;
 
    h3->turIsmi();
 
    delete(h1);
    delete(h2);
 
  return 0;
}