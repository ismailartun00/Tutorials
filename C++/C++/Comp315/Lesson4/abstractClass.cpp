#include <iostream>

//Sekil class'ı bir abstract class'dır.
class Sekil{
    protected:
        double alan, cevre;
    public:
        virtual void SenNesin() = 0;
        virtual void AlanHesapla() = 0;
        virtual void CevreHesapla() = 0;
        double GetAlan() const {return alan;}
        double GetCevre() const {return cevre;}
};
class Dikdortgen : public Sekil{
    private:
        double yukseklik, genislik;
    public:
        Dikdortgen(double yukseklik, double genislik){
            this->yukseklik = yukseklik;
            this->genislik = genislik;
        }
        void SenNesin(){
            std::cout << "Ben Dikdörtgenim." << std::endl;
        }
        void AlanHesapla(){
            alan = yukseklik * genislik;
        }
        void CevreHesapla(){
            cevre = 2*(yukseklik + genislik);
        }
};
class Daire : public Sekil{
    private:
        double r;
    public:
        Daire(double r){
            this->r = r;
        }
        void SenNesin(){
            std::cout << "Ben Daireyim." << std::endl;
        }
        void AlanHesapla(){
            alan = r * r * 3.141592;
        }
        void CevreHesapla(){
            cevre = 2 * 3.141592 * r;
        }
};
int main(){
    Sekil* dizi[2];
    dizi[0] = new Dikdortgen(10, 2);
    dizi[1] = new Daire(10);

    for(int i = 0; i < 2; i++){
        dizi[i]->AlanHesapla();
        dizi[i]->CevreHesapla(); 
        std::cout << dizi[i]->GetAlan() << " " << dizi[i]->GetCevre() << std::endl;
    }

    std::cin.get();
}