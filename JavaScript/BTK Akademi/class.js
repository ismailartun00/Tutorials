class Personel{
    constructor(ad, soyad){
        this.ad = ad;
        this.soyad = soyad;
    }
    kaydet(){
        console.log(`Personel Kaydedildi: ${this.ad}`);
    }
}

const personel = new Personel("Engin", "Demiroğ");
personel.kaydet();

personel.ad = "Engin";
console.log(personel.ad);