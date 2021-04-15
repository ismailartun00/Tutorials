bool Kontrol1(int sayi) {
  if (sayi < 3) {
    return true;
  } else {
    return false;
  }
}

bool Kontrol2(int sayi) {
  return sayi < 3;
}

void main() {
  print("-----------------");
  List<int> sayilar = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
  var kuralaUyanlar1 = sayilar.where((int sayi) => sayi < 3).toList();
  print(kuralaUyanlar1);
  print("-----------------");
  var kuralaUyanlar2 = sayilar.where(Kontrol1).toList();
  print(kuralaUyanlar2);
  print("-----------------");
  var kuralaUyanlar3 = sayilar.where(Kontrol2).toList();
  print(kuralaUyanlar3);
  print("-----------------");
  var kuralaUyanlar4 = sayilar.where((int sayi) {
    return sayi < 3;
  }).toList();
  print(kuralaUyanlar4);
  print("-----------------");
  var kuralaUyanlar5 = sayilar.where((int sayi) => sayi < 3).toList();
  print(kuralaUyanlar5);
  print("-----------------");
}
