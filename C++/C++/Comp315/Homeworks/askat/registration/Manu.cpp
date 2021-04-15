#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include "DataFile.h"
#include "DataFile1.h"
#include "DataFile2.h"
#include "DataFile3.h"
#include "DataFile4.h"
using namespace std;
int main(){
	ofstream outfile_format;
    outfile_format.open("bill.txt", ios::out | ios::trunc );
    // First of all data_file.Its contents will be truncated before opening the file.
	
	

	
	
//----------------------------------- Menu --------------------------------------//
//---------------------------------- DataFile.h ----------------------------------//	
	
	Menue_1 n1;
	cout<<"\n\n\t\t-------- RESTAURANT MANAGEMENT SYSTEM ---------\n\n";
	cout<<"\n\n\t\t--------------- CHOP AND SUEY -----------------\n\n";

	n1.outfile<<"\n\n\t\t-------- RESTAURANT MANAGEMENT SYSTEM ---------\n\n";
	n1.outfile<<"\n\n\t\t--------------- CHOP AND SUEY -----------------\n\n";

	n1.Food_1();
	cout<<"\n\t------------------------ Menue Details ---------------------\n\n";
	n1.outfile<<"\n\t------------------------ Menue Details ---------------------\n\n";

cout<<"1:  ";   n1.menue_1();
cout<<"2:  ";	n1.menue_2();
cout<<"3:  ";	n1.menue_3();
cout<<"4:  ";	n1.menue_4();
cout<<"5:  ";	n1.menue_5();
cout<<"6:  ";	n1.menue_6();
cout<<"7:  ";	n1.menue_7();
cout<<"8:  ";	n1.menue_8();
cout<<"9:  ";	n1.menue_9();
cout<<"10:  ";	n1.menue_10();
cout<<"11:  ";	n1.menue_11();
cout<<"12:  ";	n1.menue_12();
cout<<"13:  ";	n1.menue_13();
	cout<<"\n\n\n\t|||||||||||||||||---  RESTAURANT---||||||||||||||||\n\n\n";
	n1.outfile<<"\n\n\n\t|||||||||||||||||---   RESTAURANT---||||||||||||||||\n\n\n";

	cout<<"\n\t------------------- Here you can Menu choice ---------------\n\n";
	n1.outfile<<"\n\t------------------- Here you can Menu choice ---------------\n\n";

	cout<<"\n\t------------------- Choice limited in Menu 4 ---------------\n\n";
	n1.outfile<<"\n\t------------------- Choice limited in Menu 4 ---------------\n\n";

	cout<<"\n\t------------------ Your choice can select any 4 ------------\n\n";
	n1.outfile<<"\n\t------------------ Your choice can select any 4 ------------\n\n";
	
	n1.outfile<<"\n\t----------------------- Welcome Mr. / Ms. ------------------\n\n";
	cout<<"\n\t----------------------- Welcome Mr. / Ms. ------------------\n\n";
	
	
	
//----------------------------------- Name of Customer --------------------------------------//
//---------------------------------- DataFile4.h ----------------------------------//	

	Customer2 cu(); // here call constructor.

	Customer1 *cu1;   // case polymorphism
	Customer2 cu2; // case polymorphism
	cu1=&cu2; // case polymorphism
	cu1->sets_detail(); // case polymorphism
	cu1->gets_detail(); 				// runtime use polymorphism
	
//-------------------------------------------------------------------------------------------//	
	
	cout<<"\n\t------------------ I hope you enjoy these Menu -------------\n\n";
	n1.outfile<<"\n\t------------------ I hope you enjoy these Menu -------------\n\n";
	
	char chr;
	do{
		n1.menu_select_1();
		n1.menu_num1();
		n1.menu_num2();
		n1.menu_num3();
		n1.menu_num4();
		n1.menu_num1_1();
		n1.menu_num2_2();
		n1.menu_num3_3();
		n1.menu_num4_4();
		n1.menu_bill();
		
		cout<<"\nDo you want have continue.[y/n or Y/N] : ";
		n1.outfile<<"\nDo you want have continue.[y/n or Y/N] : ";
		cin>>chr; n1.outfile<<chr;
		if(chr=='n'||chr=='N'){
			exit(0);
		}
		cout<<endl; n1.outfile<<endl;
	}while((chr=='y') || (chr=='Y'));


	cout<<"\n\n";
	return 0;
}

