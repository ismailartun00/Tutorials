donusturucu(int sayi) {
  return sayi + 1;
}

void main() {
  print("-------------------------");
  List<int> sayilar = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
  var donusturulmus = sayilar.map(donusturucu).toList();
  print(donusturulmus);
  print("-------------------------");
}
