// document.getElementById("bio").innerHTML = "Derin Demirog : 2014"

//------------------------------

// var intro1 = document.getElementById("intro1");

// var mesaj = document.getElementById("mesaj");

// mesaj.innerHTML = intro1.innerHTML;

// var tumListeler = document.getElementsByTagName("ul");
// var sehirler = tumListeler[0];

// tumElemanlar = sehirler.getElementsByTagName("li");

// for(i=0; i<tumElemanlar.length; i++){
//     alert(tumElemanlar[i].innerHTML);
// }

//------------------------------

// var classElemanları = document.getElementsByClassName("intro1");

// alert(classElemanları[1].innerHTML);

//------------------------------

// var queryElemanları = document.querySelectorAll("p.intro1");
// alert(queryElemanları.length)

//------------------------------

// var classElemanları = document.getElementsByClassName("intro1");

// alert(classElemanları[1].innerHTML);
// alert(classElemanları.length);

//------------------------------

// var isimElemanlari = document.getElementsByName("musteriAdi");
// alert(isimElemanlari[0].value);

//------------------------------

// var salih = document.getElementById("salih").addEventListener("click", rengiDegistir);

// function rengiDegistir(){
//     document.getElementById("div1").style.color="red";
//     var isimElemanlari = document.getElementsByName("musteriAdi");
//     isimElemanlari[0].value = "Derin";
// }

//------------------------------

// var salih = document.getElementById("salih").addEventListener("mouseover", rengiDegistir);

// function rengiDegistir(){
//     document.getElementById("div1").style.color="red";
//     var isimElemanlari = document.getElementsByName("musteriAdi");
//     isimElemanlari[0].value = "Derin";
// }

//------------------------------

// var node = document.getElementById("agac");
// alert(node.childNodes[0].nodeValue);

//------------------------------

var baslik = document.createElement("h2");
var node = document.createTextNode("Merhaba JavaScript");
baslik.appendChild(node);

var div1 = document.getElementById("div1");
var p2 = document.getElementById("p2");

div1.insertBefore(baslik, p2);

alert("P2 Siliniyor");
div1.removeChild(p2);

alert("Değiştiriliyor");
var p1 = document.getElementById("p1");
div1.replaceChild(baslik, p1);

//------------------------------



//------------------------------