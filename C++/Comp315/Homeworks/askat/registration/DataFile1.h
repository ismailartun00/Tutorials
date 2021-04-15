#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

class Concept{
	protected:
		string n1;	
	public:
		void Name_Rustaurant(){
			ofstream out1;
			out1.open("bill.txt",ios::out | ios::app);
			cout<<"=> AAAA STARK RESTAURANT\n\n";
			out1<<"=> AAAA STARK RESTAURANT\n\n";
		}
		void concept(string n){
			n1=n;
		}
		void concepts(){
			ofstream out2;
			out2.open("bill.txt",ios::out | ios::app);
			cout<<"\nConcept : Resturant of "<<n1<<" is international brand.\n\t  Many of branches in world of "<<n1<<" restaurant.\n\t  Such as U.S.A,U.K,Germany,France,Itely,Pakistan etc.";
			out2<<"\nConcept : Resturant of "<<n1<<" is international brand.\n\t  Many of branches in world of "<<n1<<" restaurant.\n\t  Such as U.S.A,U.K,Germany,France,Itely,Pakistan etc.";
			cout<<"\n\t  Thousands of people are customer and Thousands or more\n\t  people are working at "<<n1<<" restaurant.";
			out2<<"\n\t  Thousands of people are customer and Thousands or more\n\t  people are working at "<<n1<<" restaurant.\n";
			cout<<"\n";
		}
};
class Capital{ // Here Composition
	private:
	    Concept c1;       // Use a Compostion 
	    string sss;
	public:
		Capital(string n,Concept cc){
			c1=cc;	sss=n;
		}
		void concept_print(){
			c1.concepts();
		}
		void capital_print(){
			ofstream out3;
			out3.open("bill.txt",ios::out | ios::app);
			cout<<"\nCapital : "<<sss<<endl;
			out3<<"\nCapital : "<<sss<<endl;
		}
};
class Location{
	protected:
		string licenses="Punjab Food Authority.Goverment of Pakistan.";
	public:
		void location_print(string s){
			ofstream out4;
			out4.open("bill.txt",ios::out | ios::app);
			cout<<"\nLocation : "<<s<<endl;
			out4<<"\nLocation : "<<s<<endl;
		}
};
class Licenses: public Location{ // Use a Inheritence
	public:
		void licenses_print(){
			ofstream out5;
			out5.open("bill.txt",ios::out | ios::app);
			cout<<"\nLicenses : Provied from "<<Licenses::licenses<<endl; // Use a access modifier
			out5<<"\nLicenses : Provied from "<<Licenses::licenses<<endl; // Use a access modifier
		}
};
class Business_Plan: public Concept,public Licenses{ // Use a Multiple Inheritence
	public:
		void Business_Plan_print(){
			ofstream out6;
			out6.open("bill.txt",ios::out | ios::app);
			cout<<"\tThese are points.Best improve qulity of Menagement System.\n\tE.g. Concept,Capital,Location,Licenses.\n\n";
			out6<<"\tThese are points.Best improve qulity of Menagement System.\n\tE.g. Concept,Capital,Location,Licenses.\n\n";
		}
};


