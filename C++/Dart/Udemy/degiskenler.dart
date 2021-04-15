void main() {
  //var değişken tipi c++'da auto değişken tipi gibidir.
  var kitapsayisi = 15;
  print(kitapsayisi);

  /*int tamsayi = 15;
  double ondaliklisayi = 15.5;
  String metin = "Merhaba";
  bool durum = true;*/

  //final keyword'u verilen değer daha sonradan değiştirilemez.
  final String metin2 = "iyi akşamlar";
  print(metin2);

  //const keyword'u de final keyword'u gibidir.
  const String metin3 = "helalsin brom";
  print(metin3);

  //değişkenlerin metotlari
  String deneme = "ismail";
  deneme += " Hoşgeldin!";
  print(deneme);

  String isim = "İsmail";
  String soyisim = "ARTUN";
  print(
      "Benim adım ve soyadım:  ${isim.toUpperCase()} ${soyisim.toUpperCase()}");

  var deneme2 = "ismail";
  print("${deneme2}");
}
