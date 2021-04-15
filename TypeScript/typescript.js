//--------------------------------------------------------
// let a: string;
// let b: number;
// let c: boolean;
// let d: any;
var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
// a = "Hello World";
// b = 22;
// c = true;
// d = "You rock my world";
// console.log(a);
// console.log("Naber");
// console.log(a, b, c, d);
//--------------------------------------------------------
// let langs: string[];
// let numbers: number[];
// let boolValues: Array<boolean>;
// let a: Array<number> = [1, 2, 3, 4, 5, 6, 7];
// langs = ["Php", "Java", "C++", "Python"];
// numbers = [1, 2, 3, 4, 5];
// boolValues = [true, false, false];
// console.log(...langs);
// console.log(...numbers);
// console.log(...boolValues);
// console.log(...a);
//--------------------------------------------------------
// function addNumbers(num1: number, num2:number){
//     console.log(num1 + num2);
// }
// addNumbers(10, 20);
//--------------------------------------------------------
// function addNumbers(num1: number, num2:number) : number{
//     return num1 + num2;
// }
// console.log(addNumbers(10, 20));
//--------------------------------------------------------
//num2 göndersek de göndermesek de çalışır.
// function addNumbers(num1: number, num2?:number) : number{
//     if(typeof num2 == "undefined"){
//         return num1;
//     }
//     return num1 + num2;
// }
// console.log(addNumbers(10));
// console.log(addNumbers(10, 20));
//--------------------------------------------------------
//num2 göndersek de göndermesek de çalışır.
// function addNumbers(num1: number, num2:number = 100) : number{
//     return num1 + num2;
// }
// console.log(addNumbers(10));
// console.log(addNumbers(10, 20));
//--------------------------------------------------------
//fonksiyonu erken sonlandırmak için kullanılar return.
// function addNumbers(num1:number, num2:number) : void{
//     console.log(num1 + num2);
//     return;
// }
// addNumbers(10, 20);
//--------------------------------------------------------
// class Person{
//     private name: string;
//     private age: number;
//     private phone: string;
//     constructor(name: string, age: number, phone: string){
//         this.name = name;
//         this.age = age;
//         this.phone = phone;
//         console.log("Kişi oluşturuldu.");
//     }
//     showInfos(){
//         console.log("İsim: " + this.name + " Yaş: " +  this.age + " Telefon: " + this.phone);
//     }
// }
// let person1 = new Person("İsmail", 25, "123456")
// person1.showInfos();
//--------------------------------------------------------
// class Person{
//     name: string;
//     age: number;
//     phone: string;
//     constructor(name: string, age: number, phone: string){
//         this.name = name;
//         this.age = age;
//         this.phone = phone;
//         console.log("Kişi oluşturuldu.");
//     }
//     showInfos(){
//         console.log("İsim: " + this.name + " Yaş: " +  this.age + " Telefon: " + this.phone);
//     }
// }
// class Employee extends Person{
//     salary: number;
//     constructor(name: string, age: number, phone: string, salary: number){
//         super(name, age, phone);
//         this.salary = salary;
//     }
//     showInfos(){
//         super.showInfos();
//         console.log("Maaş: " + this.salary);
//     }
//     changeDepartment(){
//         console.log("Departman Değiştiriliyor...");
//     }
// }
// let employee1 = new Employee("İsmail", 25, "123456", 4000);
// employee1.showInfos();
// employee1.changeDepartment();
//--------------------------------------------------------
// interface IDatabase{
//     add();
//     get();
//     update();
//     delete();
// }
// class MySql implements IDatabase{
//     add(){
//         console.log("MySql Add");
//     }
//     get(){
//         console.log("MySql Get");
//     }
//     update(){
//         console.log("MySql Update");
//     }
//     delete(){
//         console.log("MySql Delete");
//     }
// }
// let mysql = new MySql();
// mysql.add();
//--------------------------------------------------------
// interface IDatabase{
//     add();
//     get();
//     update();
//     delete();
// }
// class MySql implements IDatabase{
//     add(){
//         console.log("MySql Add");
//     }
//     get(){
//         console.log("MySql Get");
//     }
//     update(){
//         console.log("MySql Update");
//     }
//     delete(){
//         console.log("MySql Delete");
//     }
// }
// class MongoDb implements IDatabase{
//     add(){
//         console.log("MongoDb Add");
//     }
//     get(){
//         console.log("MongoDb Get");
//     }
//     update(){
//         console.log("MongoDb Update");
//     }
//     delete(){
//         console.log("MongoDb Delete");
//     }
// }
// function addDatabase(database: IDatabase){
//     database.add();
// }
// addDatabase(new MySql());
// addDatabase(new MongoDb());
//--------------------------------------------------------
var Database = /** @class */ (function () {
    function Database() {
    }
    Database.prototype.get = function () {
        console.log("Database Get");
    };
    Database.prototype.add = function () {
        console.log("Database Add");
    };
    return Database;
}());
var MySql = /** @class */ (function (_super) {
    __extends(MySql, _super);
    function MySql() {
        return _super !== null && _super.apply(this, arguments) || this;
    }
    MySql.prototype.update = function () {
        console.log("MySql Update");
    };
    MySql.prototype["delete"] = function () {
        console.log("MySql Delete");
    };
    return MySql;
}(Database));
var MongoDb = /** @class */ (function (_super) {
    __extends(MongoDb, _super);
    function MongoDb() {
        return _super !== null && _super.apply(this, arguments) || this;
    }
    MongoDb.prototype.update = function () {
        console.log("MongoDb Update");
    };
    MongoDb.prototype["delete"] = function () {
        console.log("MongoDb Delete");
    };
    return MongoDb;
}(Database));
function AddDatabase(database) {
    database["delete"]();
}
AddDatabase(new MySql());
AddDatabase(new MongoDb());
