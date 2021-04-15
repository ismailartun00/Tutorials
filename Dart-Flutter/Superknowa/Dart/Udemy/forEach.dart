ElemaniYazdir(eleman) {
  print(eleman);
}

void main() {
  print("--------------------");
  ElemaniYazdir("Elma");
  print("--------------------");
  List meyveler = ["Elma", "Armut", "Muz"];
  meyveler.forEach(ElemaniYazdir);
  print("--------------------");
  meyveler.forEach((eleman) {
    print(eleman);
  });
  print("--------------------");
  meyveler.forEach((eleman) => print(eleman));
  print("--------------------");
  var ekranaYazdir = (eleman) => print(eleman);
  meyveler.forEach(ekranaYazdir);
  print("--------------------");
}
