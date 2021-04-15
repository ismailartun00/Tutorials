class Holding {
  Holding();
  //Factory yapıcısı : factory alt sınıflarının da objelerini, fonksiyonlarını döndürebilir.
  factory Holding.yonlendir() {
    return Satis();
  }
}

class Satis extends Holding {}

class Pazarlama extends Holding {}

void main() {
  var holding1 = Holding();

  var satis1 = Holding.yonlendir();

  print(holding1);

  print(satis1);
}
