class Top {
  String renk;
  double yariCap;

  /*Top(String renk, double yariCap) {
    this.renk = renk;
    this.yariCap = yariCap;
  }*/
  //Alternatif constructor
  Top(this.renk, this.yariCap);

  Selamlama() {
    print("Merhaba ben Topi");
  }
}

class BasketbolTopu extends Top {
  BasketbolTopu({renk, yariCap}) : super(renk, yariCap);
}

void main() {
  print("-------------------");
  var top1 = Top("Kırmızı", 5.6);
  print(top1.renk);
  print(top1.yariCap);
  print("-------------------");
  top1.renk = "Sarı";
  top1.yariCap = 12;
  print("-------------------");
  print(top1.renk);
  print(top1.yariCap);
  print("-------------------");
  top1.Selamlama();
  print("-------------------");
  var top2 = Top("Mavi", 7.5);
  print(top2.renk);
  print(top2.yariCap);
  //Alternatif constructor için obje oluşturmak.
  /*print("-------------------");
  var top3 = Top(renk: "Turuncu", yariCap: 5.6);
  print(top3.renk);
  print(top3.yariCap);*/
  print("-------------------");
  Top top4 = Top("Yeşil", 30.2);
  print(top4.renk);
  print(top4.yariCap);
  print("-------------------");
  var basket = BasketbolTopu();
  basket.renk = "Sarı";
  basket.yariCap = 6;
  print(basket.renk);
  print(basket.yariCap);
  basket.Selamlama();
  print("-------------------");
  print("-------------------");
  print("-------------------");
  print("-------------------");
  print("-------------------");
}
