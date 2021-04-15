//--------------------------------------------------------

        // var sayi1 = 20;
        // var sayi2 = 30;
        // var sayi3 = 40;
        
        // alert("Toplamları: " + (sayi1+sayi2+sayi3));


        //--------------------------------------------------------
        // var array = ["Java", "Python", "C++", "C"];

        // alert(array[0]);
        // alert(array[1]);
        // alert(array[2]);
        // alert(array[3]);
        // alert(array[4]); -->undefined


        //--------------------------------------------------------
        // var array = ["Java", "Python", "C++", "C"];
        // array.push("Go");

        // alert(array);
        // alert(array.length);


        //--------------------------------------------------------
        // for(var i=0; i<10; i++){
        //     console.log("i değeri: " +i);
        // }


        //--------------------------------------------------------
        // var i=0;
        // while(i <100){
        //     console.log("i değeri: " + i);
        //     i+=2;
        // }


        //--------------------------------------------------------
        // var sayilar = [32, 5, 1, 100, -1, 90];
        // alert(sayilar.length);
        // console.log("Array Eleanları...");
        // for(var i = 0; i < sayilar.length; i++){
        //     console.log("Eleman: " +sayilar[i]);
        // }


        //--------------------------------------------------------
        // var sayilar = [32, 5, 1, 100, -1, 90];
        // alert(sayilar.length);
        // console.log("Array Eleanları...");
        // sayilar.forEach(function(sayi)){
        //     console.log("Eleman: " + sayi);
        // }


        //--------------------------------------------------------
        // var a = 5;
        // var b = 6;
        // if(a==b){
        //     console.log("Eşit");
        // }
        // else if(a!=b){
        //     console.log("Eşit Değildir.");
        // }
        // else{
        //     console.log("Bir şeyler yanlış gitti.");
        // }


        //--------------------------------------------------------
        //Burada sadece değerler kontrol edilir.
        // if(2=="2"){
        //     console.log("Eşit");
        // }


        //--------------------------------------------------------
        //Burada hem değerler hem de veri tipleri kontrol edilir.
        // if(2==="2"){
        //     console.log("Eşit");
        // }


        //--------------------------------------------------------
        // var islem = 4;
        // switch(islem){
        //     case 1:
        //         console.log("İşlem 1");
        //         break;
        //     case 2:
        //         console.log("İşlem 2");
        //         break;
        //     case 3:
        //         console.log("İşlem 3");
        //         break;
        //     case 4:
        //         console.log("İşlem 4");
        //         break;
        //     default:
        //         console.log("Geçersiz işlem...");
        //         break;
        // }


        //--------------------------------------------------------
        // function selamla(){
        //     console.log("Merhaba Nasılsın ?");
        // }

        // selamla();


        //--------------------------------------------------------
        //Fonksiyon Tanımlama
        // function selamla(isim){
        //     console.log("Merhaba " + isim);
        // }

        // selamla("İsmail");


        //--------------------------------------------------------
        //Geri Dönüş Değeri Olan Fonksiyon Tanımlama
        // function toplama(a, b, c){
        //     return (a + b + c);
        // }
        // var toplam = toplama(3, 4, 5);
        // console.log("Toplamları: " + toplam);


        //--------------------------------------------------------
        //Obje Tanımlama ve Kullanma
        // var calisan = {
        //     isim: "İsmail",
        //     soyisim: "Artun",
        //     numara: 123456,
        //     diller: ["Php", "Java", "C++"],
        //     adres: {
        //         mahalle: "Fatih",
        //         cadde: "Petrolyolu",
        //         sokak: "Lahika"
        //     }
        // }
        // console.log(calisan.isim);
        // console.log(calisan.numara);
        // console.log(calisan.diller);

        // console.log(calisan.adres);
        // console.log(calisan.adres.cadde);


        //--------------------------------------------------------
        //Obje İçerisinde Fonksiyon Tanımlama ve Çağırma
        // var calisan = {
        //     isim: "İsmail",
        //     soyisim: "Artun",
        //     numara: 123456,
        //     diller: ["Php", "Java", "C++"],
        //     isimBilgileri: function(){
        //         return ("Çalışan İsmi: " + this.name + " Soyismi: " + this.soyisim);
        //     }
        // }
        // console.log(calisan.isim);
        // console.log(calisan.numara);
        // console.log(calisan.diller);

        // console.log(calisan.isimBilgileri());


        //--------------------------------------------------------
        //Farklı Şekilde Obje Tanımlama ve Fonksyion Tanımlama Kullanma
        // var calisan = new Object();
        
        // calisan.isim = "İsmail";
        // calisan.soyisim = "Artun";
        // calisan.isimBilgileri = function(){
        //     return ("İsim Bilgileri: " + this.isim + " " + this.soyisim);
        // }

        // console.log(calisan.isim);
        // console.log(calisan.soyisim);
        // console.log(calisan.isimBilgileri());


        //--------------------------------------------------------
        //Constrtuctor Tanımlama, Obje Oluşturma ve Kullanma - Constructor Pattern
        // function Calisan(isim, soyisim, numara){
        //     this.isim = isim;
        //     this.soyisim = soyisim;
        //     this.numara = numara;
        //     this.bilgileriGoster = function(){
        //         return ("İsim: " + this.isim + "\nSoyisim: " + this.soyisim + "\nNumara: " + this.numara);
        //     }
        // }

        // var calisan1 = new Calisan("İsmail", "Artun", 123456);
        // var calisan2 = new Calisan("Mehmet", "Gençol", 34556);
        
        // console.log(calisan1.bilgileriGoster());
        // console.log(calisan2.bilgileriGoster());
