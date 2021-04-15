void main() {
  Map<dynamic, dynamic> sozlugum = {"come": "gel", "get": "almak"};
  print(sozlugum);

  Map<String, int> sinavSonuclari = {"Fevzi": 80, "Tuncay": 35, "Meltem": 90};
  print(sinavSonuclari);

  //sözlüğe eleman eklemek için
  sinavSonuclari["Hasan"] = 35;
  print(sinavSonuclari);

  //eleman silmek için
  sinavSonuclari.remove("Tuncay");
  print(sinavSonuclari);
}
