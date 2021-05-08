var selamFonksiyonu = function selam() {
  console.log("Merhaba");
};

selamFonksiyonu();

const selamFonksyionu2 = () => {
    console.log("Merhaba 2");
}

selamFonksyionu2();

const selamFonksyionu3 = (mesaj) => {
    console.log(mesaj);
}

selamFonksyionu3("Merhaba Dünya!");

var topla = (sayi1, sayi2) => {
    return sayi1 + sayi2;
}
let toplam = topla(3,4);
console.log(toplam);