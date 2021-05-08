class Sinav {
  int sonuc = 80;
  int get SinavSonuc {
    return sonuc;
  }

  void set SinavSonuc(int yeniSonuc) {
    this.sonuc = yeniSonuc;
  }
}

void main() {
  var sinav1 = Sinav();
  sinav1.SinavSonuc = 50;
  print(sinav1.SinavSonuc);
}
