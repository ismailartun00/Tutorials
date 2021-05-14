package com.ismailartun.siniflarvefonksiyonlar

class Superkahraman(var isim:String, var yas:Int, var meslek:String) /* Primary Constructor */ {
    private var sacininRengi : String = "Sarı"

    // Getter
    fun sacRenginiAl():String{
        return this.sacininRengi;
    }

    // Setter
    fun sacRenginiDegistir() : Unit{
        this.sacininRengi = "Yeşil"
    }



    fun testFonksiyonu(){
        println("Test")
    }

    /*
    // Access Levels - Erişebilirlik Seviyeleri
    // private - protected - internal - public

    // Property
    var isim : String = ""
    var yas : Int = 0
    var meslek : String = ""

    // Constructor

    constructor(isim:String, yas:Int, meslek:String){
        this.isim = isim
        this.yas = yas
        this.meslek = meslek
        println("Constructor çağrıldı.")
    } */



}