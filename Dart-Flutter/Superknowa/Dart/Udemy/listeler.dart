void main() {
  //List<dynamic> dersek elemanları bütün veri tiplerinden atabilrz içine.
  List<dynamic> alinacaklar = ["süt", "kahve", "muz", "enginar"];
  print(alinacaklar);

  //indexine göre çekmek için print(alinacaklar[2]);
  //stringin elemanlarına ulaşmak için print(degiskenIsmi[2]);

  //listenin indexine girip o indexdeki elemanlara teker teker ulaşmak için
  print(alinacaklar[2][1]);

  //listeye eleman eklemek için
  alinacaklar.add("ekmek");
  print(alinacaklar);

  //listeden index'e göre eleman silmek için
  alinacaklar.removeAt(3);
  print(alinacaklar);

  //listeden isime göre eleman silmek için
  alinacaklar.remove("ekmek");
  print(alinacaklar);

  //listedeki elemanı değiştirmek
  alinacaklar[0] = "soda";
  print(alinacaklar);

  //tüm listeyi silmek için
  alinacaklar.clear();
  print(alinacaklar);
}
