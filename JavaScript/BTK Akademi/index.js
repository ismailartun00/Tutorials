var kullanicilar = [
    {email: "ismailartun00@gmail.com", sifre : "12345"},
    {email: "enginartun00@gmail.com", sifre: "54321"}
]

var tvitler = [
    {email: "ismailartun00@gmail.com", tvit:"Bugün hava çok güzel."},
    {email: "ismailartun00@gmail.com", tvit:"Bugün hava çok güzel 2."},
    {email: "enginartun00@gmail.com", tvit:"Kapıyı ben açacağım."}
]

var email = prompt("email?");
var sifre = prompt("sifre?");

function giris(){
    if((email == kullanicilar[0].email && sifre == kullanicilar[0].sifre) || (email == kullanicilar[1].email && sifre == kullanicilar[1].sifre)){
        console.log(tvitler);
    }else{
        console.log("Kullanıcı Adı veya Şifre Hatalı.");
    }
}

giris(email, sifre);