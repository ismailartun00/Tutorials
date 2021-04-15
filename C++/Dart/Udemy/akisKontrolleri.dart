void main() {
  var yas = 17;
  if (yas < 18) {
    print("Bu film küçükler için uygun değildir.");
  } else {
    print("Bu filmi izleyebilirsiniz.");
  }
  //kısa if döngüsü
  int hiz = 50;
  String durum;
  durum = hiz > 60 ? "hız sınırı aşıldı." : "hızınız normaldir.";
  print(durum);
}
