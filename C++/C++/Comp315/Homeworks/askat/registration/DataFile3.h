#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
class Layout_Design{
	private:
        string design1,design2,design3,design4,design5; string layout1,layout2,layout3,layout4;
	public:
		Layout_Design(string s1,string s2,string s3,string s4,string s5,string s6,string s7,string s8,string s9){
			design1=s1; design2=s2; design3=s3; design4=s4; design5=s5;
			layout1=s6; layout2=s7; layout3=s8; layout4=s9; 			
		}
		Layout_Design(Layout_Design & ld){ // Use a Copy Constructor			
			design1=ld.design1;
			design2=ld.design2;
			design3=ld.design3;
			design4=ld.design4;
			design5=ld.design5;
			layout1=ld.layout1;
			layout2=ld.layout2;
			layout3=ld.layout3;
			layout4=ld.layout4;		
		}
		void Layout_Design_print(){
			ofstream out9;
			out9.open("bill.txt",ios::out | ios::app);

			cout<<"=> DESIGN OF RESTAURANT\n\n";
			out9<<"=> DESIGN OF RESTAURANT\n\n";
			cout<<design1<<endl<<design2<<endl;
			out9<<design1<<endl<<design2<<endl;
			cout<<design3<<endl<<design4<<endl;
			out9<<design3<<endl<<design4<<endl;
			cout<<design5<<endl;
			out9<<design5<<endl;
			cout<<"\n=> LAYOUT OR RESTAURANT\n\n";
			out9<<"\n=> LAYOUT OR RESTAURANT\n\n";
			cout<<layout1<<endl<<layout2<<endl;
			out9<<layout1<<endl<<layout2<<endl;
			cout<<layout3<<endl<<layout4<<endl;
			out9<<layout3<<endl<<layout4<<endl;
		}
};
class Equipment{
	private:
		string equipment1[35];
	public:
		void Equipments(){
			
			cout<<"=> COMMERCIAL EQUIPMENT\n\n";
			cout<<"\t\t\tHere is a general checklist of everything you\n\t\t\tneed to outfit your restaurant kitchen\n\n";
			equipment1[1]="Range"; equipment1[2]="Oven"; equipment1[3]="Grill"; equipment1[4]="Deep-fryer"; equipment1[5]="Reach-in cooler"; 
			equipment1[6]="Walk-in cooler"; equipment1[7]="Freezer (either a chest, upright, or walk-in)"; equipment1[8]="Sauté pans";
			equipment1[9]="Stock/soup pots"; equipment1[10]="Saucepans"; equipment1[11]="Baking sheets"; equipment1[12]="Pizza screens";
			equipment1[13]="Baking pans"; equipment1[14]="Tongs"; equipment1[15]="Spatulas"; equipment1[16]="Ladles"; equipment1[17]="Chef’s knives";
			equipment1[18]="Pizza paddle"; equipment1[19]="Whisks"; equipment1[20]="Mixing bowls"; equipment1[21]="Plastic inserts for coolers"; 
			equipment1[22]="Steam table"; equipment1[23]="Entrée plates"; equipment1[24]="Pasta bowls"; equipment1[25]="Appetizer plates"; 
			equipment1[26]="Salad plates"; equipment1[27]="Dessert plates"; equipment1[28]="Metal or plastic shelves for walk-in cooler"; 
			equipment1[29]="Cleaning rags"; equipment1[30]="Cleaning buckets (specifically labeled for cleaning products)";
			equipment1[31]="Rubber floor mats"; equipment1[32]="Hand soap and sanitizer dispensers"; equipment1[33]="Fire extinguisher"; 
		}
		void Print1_5(){
			for(int i=1;i<=5;i++){
				cout<<equipment1[i]<<"  ,  ";
			}
		}
		void Print6_8(){
			for(int i=6;i<=8;i++){
				cout<<equipment1[i]<<"  ,  ";
			}
		}
		void Print9_14(){
			for(int i=9;i<=14;i++){
				cout<<equipment1[i]<<"  ,  ";
			}
		}
		void Print15_19(){
			for(int i=15;i<=19;i++){
				cout<<equipment1[i]<<"  ,  ";
			}
		}
		void Print20_24(){
			for(int i=20;i<=24;i++){
				cout<<equipment1[i]<<"  ,  ";
			}
		}
		void Print25_29(){
			for(int i=25;i<=29;i++){
				cout<<equipment1[i]<<"  ,  ";
			}
		}
		void Print30_33(){
			for(int i=30;i<=33;i++){
				cout<<equipment1[i]<<"  ,  ";
			}
			cout<<" etc.\n";
		}
		void data_sets_1(){
			ofstream out10;
			out10.open("bill.txt",ios::out | ios::app);
			out10<<"\n\n=> COMMERCIAL EQUIPMENT\n\n";
			out10<<"\t\t\tHere is a general checklist of everything you\n\t\t\tneed to outfit your restaurant kitchen\n\n";
			for(int i=1;i<=5;i++){
				out10<<equipment1[i]<<"  ,  ";
			}
			out10<<"\n";
			for(int i=6;i<=8;i++){
				out10<<equipment1[i]<<"  ,  ";
			}
			out10<<"\n";
			for(int i=9;i<=14;i++){
				out10<<equipment1[i]<<"  ,  ";
			}
			out10<<"\n";
			for(int i=15;i<=19;i++){
				out10<<equipment1[i]<<"  ,  ";
			}
			out10<<"\n";
			for(int i=20;i<=24;i++){
				out10<<equipment1[i]<<"  ,  ";
			}
			out10<<"\n";
			for(int i=25;i<=29;i++){
				out10<<equipment1[i]<<"  ,  ";
			}
			out10<<"\n";
			for(int i=30;i<=33;i++){
				out10<<equipment1[i]<<"  ,  ";
			}
			out10<<" etc.\n";
		}	
};
class Equipment_System{
	private:
		Equipment eq;
	public:
		Equipment_System(Equipment eq1){
			eq=eq1;
		}
		void Equipment_set(){
			eq.Equipments();
		}
		void Equipment_prints(){			
			eq.Print1_5();
			eq.Print6_8();
			eq.Print9_14();
			eq.Print15_19();
			eq.Print20_24();
			eq.Print25_29();
			eq.Print30_33();
			eq.data_sets_1();	
		}
};

