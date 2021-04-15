/*siparisVer() {
  var siparisDurumu = siparisHazirla();
  print("Sipariş durumu: $siparisDurumu");
}
//asenkron fonksiyon
Future<void> siparisHazirla() {
  return Future.delayed(
      Duration(seconds: 4), () => print("Siparişiniz alındı"));
}*/

//senkron bir fonksiyon asenkron bir fonksiyon aldığı için bu fonksiyonu da async ile asenkron fonksiyon yaptık.
Future<String> siparisVer() async {
  var siparisDurumu = await siparisHazirla();
  return "Sipariş durumu: $siparisDurumu";
}

//asenkron fonksiyon
Future<String> siparisHazirla() {
  return Future.delayed(Duration(seconds: 4), () => "Siparişiniz alındı");
}

Future<void> main() async {
  //senkron ve asenkron işlemler
  //senkron işlemler : kahve siparşi verdiğinizde siparişiniz size teslim edilir daha sonra sıradaki müşterinin siparşi alınır.
  //asenkron işlemler : kahve siparişi alınır ve sipariş hazırlanırken başka işlemler de yapılır.

  //future : tek değer döndüren ama asenkron fonksiyonların değerini tutan bir değer tipidir.
  //stream : future ile aynı fakat daha fazla değer tutan bir veri tipidir.
  //delayed : "Future<string>" delayed metodu future tipinde bir string döndürür.
  //async : fonksiyonu senkron tipine dönüştürmek için kullanılır.
  //await : fonksiyondan gelen değeri bekle anlamına gelir.

  print(await siparisVer());
}
