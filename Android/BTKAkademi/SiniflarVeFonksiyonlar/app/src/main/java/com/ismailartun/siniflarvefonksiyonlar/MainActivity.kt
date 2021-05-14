package com.ismailartun.siniflarvefonksiyonlar

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        var j = -10
        if(j==10) {
            ilkFonksiyon()
        }else{
            ikinciFonksiyon()
        }

        cikarma(500, 20)
        var x = toplama(10, 20)
        textView.text = "Sonuç : ${x}"

        button.setOnClickListener {
            val toplamaSonucu = toplama(10, 50)
            textView.text = "Sonuç: ${toplamaSonucu}"
        }

        sinifCalisması()
        nullGuvenligi()
    }

    fun ilkFonksiyon(){
        println("İlk fonksiyon çalıştı.")
    }

    fun ikinciFonksiyon(){
        println("İkinci Fonksiyon Çalıştı.")
    }

    // Girdi Almak

    fun cikarma (x : Int, y : Int){
        textView.text = "Sonuç: ${x-y}"
    }

    // Çıktı Vermek -> Döndürmek (Return)

    fun toplama(a: Int, b:Int):Int{
        return a + b
    }

    /* fun degistir(view: View){
        val toplamaSonucu = toplama(10, 50)
        textView.text = "Sonuç: ${toplamaSonucu}"
    } */

    fun sinifCalisması(){
        /* var superman = Superkahraman()
        superman.isim = "Superman"
        superman.meslek = "Gazeteci"
        superman.yas = 50

        var batman = Superkahraman()
        batman.isim = "Batman" */

        var spiderMan = Superkahraman("spiderman", 25, "öğrenci")

        textView.text = "Yaş: ${spiderMan.yas}"

        spiderMan.testFonksiyonu()
        println(spiderMan.sacRenginiAl())
    }

    fun nullGuvenligi(){
        // Null, Nullability, Null Safety


        // Tanımlama, Defining
        var benimString : String?

        // Initialization
        benimString = "Atıl"

        var benimYasim : Int? = null
        println(benimYasim)

        // benimYasim = 2

        // null safety - 1
        if(benimYasim != null){
            println(benimYasim * 2)
        }else{
            println("null geldi")
        }

        // null safety - 2

        // !! -> null olmayacak, ? -> null olabilir
        println(benimYasim!!.minus(2))
        // println(benimYasim?.minus(2))

        // null safety - 3
        //elvis operatorü

        val sonuc = benimYasim?.minus(2)?:10
        println(sonuc)

        // null safety - 4
        //let
        //benimYasim=5
        benimYasim?.let {
            println(it*5)
        }

    }
}