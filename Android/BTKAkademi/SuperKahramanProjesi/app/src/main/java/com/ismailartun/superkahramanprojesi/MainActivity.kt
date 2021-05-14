package com.ismailartun.superkahramanprojesi

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    var numara = 0
    private var isim = ""
    private var yas : Int? = null
    private var meslek = ""

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Scoper - Kapsam
        numara = 10
    }

    fun superKahramanYap(view : View){
        numara = 5

        isim = isimText.text.toString()
        yas = yasText.text.toString().toIntOrNull()
        meslek = meslekText.text.toString()

        if(yas == null) {
            sonucText.text = "Doğru Yaşı Giriniz."
        }else{
            val superKahraman = SuperKahraman(isim,yas!!,meslek)

            sonucText.text = "İsim: ${superKahraman.isim} Yaş: ${superKahraman.yas} Meslek: ${superKahraman.meslek}"
        }


    }
}