void televizyonuAc(String name) {
  print("${name} televizyon açıldı.");
}

int Toplama(int x, int y) {
  return (x + y);
}

//eğer iki parametreli fonksiyon tanımlayıp bir parametresini göndersek de göndermesek de çalışmasını istiyorsak parametreyi [] içine almamız yeterlidir.
//[] içerisine aldığımız parametreleri soralama olarak son sıraya yazmamız gerekir.
int Carpma(int x, int y, [int z = 1]) {
  return (x * y * z);
}

//bu fonksiyonu main içerisinde tek satırda da tanımlayabiliriz.
/*double Bolme(double x, double y) {
  return (x / y);
}*/

//Anonim fonksiyonlar, yani isimsiz fonksiyon.
/*var fonksiyonum = () {
  print("Ben bir fonksiyonum");
};*/

//biraz daha küçültmek istersek şişman ok yan => kullanabiliriz.
var fonksiyonumm = (x, y) => print(x + y);

//fonksiyon içerisine parametre olarak fonksiyon göndermek
yeniFonk(gonderilenFonk) {
  //buraya parametre olarak fonksyon geldi "gonderilenFonk"
  gonderilenFonk(5, 8);
}

int main() {
  String name = "İsmail";
  televizyonuAc(name);

  int x = 5, y = 7;
  double a = 5.6, b = 7.8;
  print(Toplama(x, y));

  print(Carpma(x, y));

  //tek satırda ve main içerisinde fonksiyon tanımlama
  double Bolme(double x, double y) => x / y;
  print(Bolme(a, b));

  /*fonksiyonum();*/

  fonksiyonumm(x, y);

  //parametre olarak fonksiyon ismini yazıp gönderiyoruz.
  yeniFonk(fonksiyonumm);
  //parametre olarak fonksiyon yazıp da gönderebiliriz.
  yeniFonk((x, y) => print(x + y));

  //listeye anonim fonksiyon yollamak.
  List alisverisListesi = ["Peynir", "Ekmek", "Süt"];
  alisverisListesi.forEach((eleman) => print(eleman));

  return 0;
}
