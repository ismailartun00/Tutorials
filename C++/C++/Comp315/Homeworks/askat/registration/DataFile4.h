#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
class Customer1{
	protected:
		char *name;
		string *id;
	public:
		Customer1(){
			name=new char[100];
			id=new string;
		}
		void sets_detail(){
			ofstream out11;
			out11.open("bill.txt",ios::out | ios::app);
			cout<<"\nEnter a your name : ";
			out11<<"\nEnter a your name : ";
			cin.get(name,100); // use charactor case
			out11<<name;
			cout<<"\n\nEnter a your id_card number : ";
			out11<<"\nEnter a your id_card number : ";
			cin>>*id; out11<<*id; // pointer use for print_number.
		}
		virtual void gets_detail()=0;	
		~Customer1(){
			delete [] name;
			delete id;
		}	
};
class Customer2:public Customer1{
	public:
		Customer2():Customer1(){ // access the Constructor...
		}
		void gets_detail(){
			ofstream out12;
			out12.open("bill.txt",ios::out | ios::app);
			cout<<"\nName : "<<name<<endl;
			out12<<"\nName : "<<name<<endl;
			cout<<"\nID_Card : "<<*id<<endl;
			out12<<"ID_Card : "<<*id<<endl;
		}
		~Customer2(){
		}
};


class Contects{ // Use Data Encapsulation and Abstruction
	private:
		string contect,number;
	public:
	    void sets(string c=" ",string n=" "){
	    	contect=c;
	    	number=n;
		}
		void gets(){
			ofstream out13;
			out13.open("bill.txt",ios::out | ios::app);
			cout<<"\nContect : Contect by Email : "<<contect<<endl;
			out13<<"\nContect : Contect by Email : "<<contect<<endl;
			cout<<"\nContect : Contect by Phone : "<<number<<endl;
			out13<<"\nContect : Contect by Phone : "<<number<<endl;
		}
};
