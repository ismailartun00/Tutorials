/*class Kare {
  //alan = kenar * kenar
  //çevre = kenar * 4
  double kenar, alan, cevre;
  //initializer list ile constructor
  //Kare(double kenar) : alan = kenar * kenar, cevre = kenar * 4 {}
  Kare(double kenar){
    this.kenar = kenar;
    this.alan = kenar * kenar;
    this.cevre = kenar * 4;
  }
}*/
class A {
  A(sayi1, sayi2, sayi3);
  A.yonlendirici(sayi1, sayi2) : this(sayi1, sayi2, 3);
  A.yonlendirici2(sayi1) : this.yonlendirici(sayi1, 2);
}

void main() {
  /*var kare1 = Kare(6);
  print(kare1.alan);
  print(kare1.cevre);*/

  /*var obje1 = A.yonlendirici2(1);*/
}
