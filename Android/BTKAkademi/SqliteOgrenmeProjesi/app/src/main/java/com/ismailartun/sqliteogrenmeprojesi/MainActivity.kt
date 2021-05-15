package com.ismailartun.sqliteogrenmeprojesi

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import java.lang.Exception

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


        // try - catch

        try{

            val veritabani = this.openOrCreateDatabase("Urunler", MODE_PRIVATE, null)

            // veritabanı oluşturma
            veritabani.execSQL("CREATE TABLE IF NOT EXISTS urunler (id INTEGER PRIMARY KEY, isim VARCHAR, fiyat INT)")

            // veritabanına veri ekleme
            // veritabani.execSQL("INSERT INTO urunler (isim, fiyat) VALUES ('Ayakkabi', 100)")
            // veritabani.execSQL("INSERT INTO urunler (isim, fiyat) VALUES ('Elbise', 150)")
            // veritabani.execSQL("INSERT INTO urunler (isim, fiyat) VALUES ('Tshirt', 50)")
            // veritabani.execSQL("INSERT INTO urunler (isim, fiyat) VALUES ('Atkı', 200)")
            // veritabani.execSQL("INSERT INTO urunler (isim, fiyat) VALUES ('Bere', 10)")

            // veritabanındaki verileri güncelleme
            // veritabani.execSQL("UPDATE urunler set fiyat=250 WHERE isim='Elbise'")
            // veritabani.execSQL("UPDATE urunler SET isim='Ayakkab' WHERE id=1")

            // veritabanındaki verileri silme
            // veritabani.execSQL("DELETE FROM urunler WHERE id=5")

            // veritanındaki verileri okuma
            val cursor = veritabani.rawQuery("SELECT * FROM urunler", null)

            // veri tabanından sorgulara göre veri okuma
            // val cursor = veritabani.rawQuery("SELECT * FROM urunler WHERE isim LIKE '%e'", null)
            // val cursor = veritabani.rawQuery("SELECT * FROM urunler WHERE isim LIKE 'A%'", null)
            // val cursor = veritabani.rawQuery("SELECT * FROM urunler WHERE id=3", null)
            // val cursor = veritabani.rawQuery("SELECT * FROM urunler WHERE isim='Bere'", null)
            // val cursor = veritabani.rawQuery("SELECT * FROM urunler", null)

            val idColumnIndex = cursor.getColumnIndex("id")
            val isimColumnIndex = cursor.getColumnIndex("isim")
            val fiyatColumnIndex = cursor.getColumnIndex("fiyat")

            while (cursor.moveToNext()){
                println("ID: ${cursor.getInt(idColumnIndex)}")
                println("ISIM: ${cursor.getString(isimColumnIndex)}")
                println("FIYAT: ${cursor.getInt(fiyatColumnIndex)}")
            }

            cursor.close()

        }catch(e : Exception){
            e.printStackTrace()
        }


    }
}