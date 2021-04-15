#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
class Initialize{	 
	public:
		string str; int i=0;
		string array[15];
		string array2; string array1;
		fstream infile;
		fstream outfile;
		int limit;
		virtual void Food_1()=0;
};
class Menue_1:public Initialize{
    private:
	    int num1,num2,num3,num4;
		string names[15]; double nums[15];	int num_1[15];	
		string N_1,N_2,N_3,N_4; double n_1,n_2,n_3,n_4;
		double bill=0.0;
	public:
		string s_1;string s_2; 
		string s1[15];
		double s11[15];
		string s111[15];
		Menue_1(){
		infile.open("menu.txt",ios::in);
	    outfile.open("bill.txt",ios::out | ios::app);
        }
	    void Food_1(){
	        while(!infile.eof()){
	        getline(infile,str);
			cout<<"\t\t"<<str<<"\n\n";
			outfile<<"\t\t"<<str<<endl;
			array[i]=str.substr(0,str.find(".")-1);							
			i++;
	       }
	    }
	    void menue_1();
	    void menue_2();
	    void menue_3();
	    void menue_4();
	    void menue_5();
	    void menue_6();
	    void menue_7();
	    void menue_8();
	    void menue_9();
	    void menue_10();
	    void menue_11();
	    void menue_12();
	    void menue_13();
	    
	    void menu_select_1();
	    
	    void menu_num1();
	    void menu_num2();
	    void menu_num3();
	    void menu_num4();
	    
	    void menu_num1_1();
	    void menu_num2_2();
	    void menu_num3_3();
	    void menu_num4_4();
	    
	    void menu_bill();
	    
	    ~Menue_1(){
		outfile.close();
	    infile.close();
	    }
};
void Menue_1::menue_1(){
	s1[0]="Beef Chop Suey			........ 410.00"; s11[0]=0.0;
	s111[0]=s1[0].substr(s1[0].find_last_of(".")-4,s1[0].find_last_of("0"));
	istringstream(s111[0])>>s11[0];  cout<<setw(40)<<array[0]<<setw(10)<<s11[0]; num_1[1]=1; cout<<"\n\n";
	outfile<<"1:  "; outfile<<setw(40)<<array[0]<<setw(10)<<s11[0]; outfile<<"\n\n";
}
void Menue_1::menue_2(){
	s1[1]="Chinese Chop Suey 		........ 410.00"; s11[1]=0.0;
	s111[1]=s1[1].substr(s1[1].find_last_of(".")-4,s1[1].find_last_of("0"));
	istringstream(s111[1])>>s11[1];  cout<<setw(40)<<array[1]<<setw(10)<<s11[1]; num_1[2]=2; cout<<"\n\n";
	outfile<<"2:  "; outfile<<setw(40)<<array[1]<<setw(10)<<s11[1]; outfile<<"\n\n"; 
}
void Menue_1::menue_3(){
	s1[2]="Vegetable Chop Suey 	........ 320.00"; s11[2]=0.0;
	s111[2]=s1[2].substr(s1[2].find_last_of(".")-4,s1[2].find_last_of("0"));
	istringstream(s111[2])>>s11[2];  cout<<setw(40)<<array[2]<<setw(10)<<s11[2]; num_1[3]=3; cout<<"\n\n";
	outfile<<"3:  "; outfile<<setw(40)<<array[2]<<setw(10)<<s11[2]; outfile<<"\n\n";
}
void Menue_1::menue_4(){
	s1[3]="Prawn Chop Suey 		........ 440.00"; s11[3]=0.0;
	s111[3]=s1[3].substr(s1[3].find_last_of(".")-4,s1[3].find_last_of("0"));
	istringstream(s111[3])>>s11[3];  cout<<setw(40)<<array[3]<<setw(10)<<s11[3]; num_1[4]=4; cout<<"\n\n";
	outfile<<"4:  "; outfile<<setw(40)<<array[3]<<setw(10)<<s11[3]; outfile<<"\n\n";
}
void Menue_1::menue_5(){
	s1[4]="Fish Shop Suey 			........ 440.00"; s11[4]=0.0;
	s111[4]=s1[4].substr(s1[4].find_last_of(".")-4,s1[4].find_last_of("0"));
	istringstream(s111[4])>>s11[4];  cout<<setw(40)<<array[4]<<setw(10)<<s11[4]; num_1[5]=5; cout<<"\n\n";
	outfile<<"5:  "; outfile<<setw(40)<<array[4]<<setw(10)<<s11[4]; outfile<<"\n\n";
}
void Menue_1::menue_6(){
	s1[5]="Chicken Chop Suey 		......... 410.00"; s11[5]=0.0;
	s111[5]=s1[5].substr(s1[5].find_last_of(".")-4,s1[5].find_last_of("0"));
	istringstream(s111[5])>>s11[5];  cout<<setw(40)<<array[5]<<setw(10)<<s11[5]; num_1[6]=6; cout<<"\n\n";
	outfile<<"6:  "; outfile<<setw(40)<<array[5]<<setw(10)<<s11[5]; outfile<<"\n\n";
}
void Menue_1::menue_7(){
	s1[6]="American Chop Suey 		........ 440.00"; s11[6]=0.0;
	s111[6]=s1[6].substr(s1[6].find_last_of(".")-4,s1[6].find_last_of("0"));
	istringstream(s111[6])>>s11[6];  cout<<setw(40)<<array[6]<<setw(10)<<s11[6]; num_1[7]=7; cout<<"\n\n";
	outfile<<"7:  "; outfile<<setw(40)<<array[6]<<setw(10)<<s11[6]; outfile<<"\n\n";
}
void Menue_1::menue_8(){
	s1[7]="Beef Button Mushroom Chop Suey . 440.00"; s11[7]=0.0;
	s111[7]=s1[7].substr(s1[7].find_last_of(".")-4,s1[7].find_last_of("0"));
	istringstream(s111[7])>>s11[7];  cout<<setw(40)<<array[7]<<setw(10)<<s11[7]; num_1[8]=8; cout<<"\n\n";
	outfile<<"8:  "; outfile<<setw(40)<<array[7]<<setw(10)<<s11[7]; outfile<<"\n\n";
}
void Menue_1::menue_9(){
	s1[8]="Chkn Button Mushroom Chop Suey . 440.00"; s11[8]=0.0;
	s111[8]=s1[8].substr(s1[8].find_last_of(".")-4,s1[8].find_last_of("0"));
	istringstream(s111[8])>>s11[8];  cout<<setw(40)<<array[8]<<setw(10)<<s11[8]; num_1[9]=9; cout<<"\n\n";
	outfile<<"9:  "; outfile<<setw(40)<<array[8]<<setw(10)<<s11[8]; outfile<<"\n\n";
}
void Menue_1::menue_10(){
	s1[9]="Prawn Button Mushroom Chop Suey. 440.00"; s11[9]=0.0;
	s111[9]=s1[9].substr(s1[9].find_last_of(".")-4,s1[9].find_last_of("0"));
	istringstream(s111[9])>>s11[9];  cout<<setw(40)<<array[9]<<setw(10)<<s11[9]; num_1[10]=10; cout<<"\n\n";
	outfile<<"10:  "; outfile<<setw(40)<<array[9]<<setw(10)<<s11[9]; outfile<<"\n\n";
}
void Menue_1::menue_11(){
	s1[10]="Chicken & Pineapple Chop Suey  . 440.00"; s11[10]=0.0;
	s111[10]=s1[10].substr(s1[10].find_last_of(".")-4,s1[10].find_last_of("0"));
	istringstream(s111[10])>>s11[10];  cout<<setw(40)<<array[10]<<setw(10)<<s11[10]; num_1[11]=11; cout<<"\n\n";
	outfile<<"11:  "; outfile<<setw(40)<<array[10]<<setw(10)<<s11[10]; outfile<<"\n\n"; 
}
void Menue_1::menue_12(){
	s1[11]="Beef Pineapple Chop Suey 	   . 440.00"; s11[11]=0.0;
	s111[11]=s1[11].substr(s1[11].find_last_of(".")-4,s1[11].find_last_of("0"));
	istringstream(s111[11])>>s11[11];  cout<<setw(40)<<array[11]<<setw(10)<<s11[11]; num_1[12]=12; cout<<"\n\n";
	outfile<<"12:  "; outfile<<setw(40)<<array[11]<<setw(10)<<s11[11]; outfile<<"\n\n";
}
void Menue_1::menue_13(){
	s1[12]="Prawn Pineapple Chop Suey      . 440.00"; s11[12]=0.0;
	s111[12]=s1[12].substr(s1[12].find_last_of(".")-4,s1[12].find_last_of("0"));
	istringstream(s111[12])>>s11[12];  cout<<setw(40)<<array[12]<<setw(10)<<s11[12]; num_1[13]=13; cout<<"\n\n";
	outfile<<"13:  "; outfile<<setw(40)<<array[12]<<setw(10)<<s11[12]; outfile<<"\n\n";
}


void Menue_1::menu_select_1(){ 
    cout<<"\t\t\tEnter a limit is equal to \"4\" : ";
    outfile<<"\t\t\tEnter a limit is equal to \"4\" : ";

    cin>>limit;
    outfile<<limit;

	
    
    if(limit<0||limit>9){
    	cout<<"\nError on Limit then reenter!\n";
    	outfile<<"\nError on Limit then reenter!\n";
    	exit(0);
	}
	else{
		for(int i=1; i<limit; i++){
			cout << "\n\nEnter a Choice :" << i << ": ";
			outfile<<"\n\nEnter a Choice :"<< i << ": ";
			cin>>i; outfile << i;
		}
		/*cout<<"\n\nEnter a Choice :1: ";
		outfile<<"\n\nEnter a Choice :1: ";
		cin>>num1; outfile<<num1;
		cout<<"\n\nEnter a Choice :2: ";
		outfile<<"\n\nEnter a Choice :2: ";
		cin>>num2; outfile<<num2;
		cout<<"\n\nEnter a Choice :3: ";
		outfile<<"\n\nEnter a Choice :3: ";
		cin>>num3; outfile<<num2;
		cout<<"\n\nEnter a Choice :4: ";
		outfile<<"\n\nEnter a Choice :4: ";
		cin>>num4; outfile<<num4;*/
	}
}
void Menue_1::menu_num1(){                //  ----------------------------   num1
	switch(num1){
		case 1:
			names[1]=array[0];
			nums[1]=s11[0];
		break;
		case 2:
			names[2]=array[1];
			nums[2]=s11[1];
		break;
		case 3:
			names[3]=array[2];
			nums[3]=s11[2];
		break;
		case 4:
			names[4]=array[3];
			nums[4]=s11[3];
		break;
		case 5:
			names[5]=array[4];
			nums[5]=s11[4];
		break;
		case 6:
			names[6]=array[5];
			nums[6]=s11[5];
		break;
		case 7:
			names[7]=array[6];
			nums[7]=s11[6];
		break;
		case 8:
			names[8]=array[7];
			nums[8]=s11[7];
		break;
		case 9:
			names[9]=array[8];
			nums[9]=s11[8];
		break;
		case 10:
			names[10]=array[9];
			nums[10]=s11[9];
		break;
		case 11:
			names[11]=array[10];
			nums[11]=s11[10];
		break;
		case 12:
			names[12]=array[11];
			nums[12]=s11[11];
		break;
		case 13:
			names[13]=array[12];
			nums[13]=s11[12];
		break;
		default:
			cout<<"\n\tChoice a occur Error.\n";
		break;	
	}
}
void Menue_1::menu_num2(){					//  ----------------------------   num2
	switch(num2){
		case 1:
			names[1]=array[0];
			nums[1]=s11[0];
		break;
		case 2:
			names[2]=array[1];
			nums[2]=s11[1];
		break;
		case 3:
			names[3]=array[2];
			nums[3]=s11[2];
		break;
		case 4:
			names[4]=array[3];
			nums[4]=s11[3];
		break;
		case 5:
			names[5]=array[4];
			nums[5]=s11[4];
		break;
		case 6:
			names[6]=array[5];
			nums[6]=s11[5];
		break;
		case 7:
			names[7]=array[6];
			nums[7]=s11[6];
		break;
		case 8:
			names[8]=array[7];
			nums[8]=s11[7];
		break;
		case 9:
			names[9]=array[8];
			nums[9]=s11[8];
		break;
		case 10:
			names[10]=array[9];
			nums[10]=s11[9];
		break;
		case 11:
			names[11]=array[10];
			nums[11]=s11[10];
		break;
		case 12:
			names[12]=array[11];
			nums[12]=s11[11];
		break;
		case 13:
			names[13]=array[12];
			nums[13]=s11[12];
		break;
		default:
			cout<<"\n\tChoice a occur Error.\n";
		break;	
	}
}
void Menue_1::menu_num3(){						//  ----------------------------   num3
	switch(num3){
		case 1:
			names[1]=array[0];
			nums[1]=s11[0];
		break;
		case 2:
			names[2]=array[1];
			nums[2]=s11[1];
		break;
		case 3:
			names[3]=array[2];
			nums[3]=s11[2];
		break;
		case 4:
			names[4]=array[3];
			nums[4]=s11[3];
		break;
		case 5:
			names[5]=array[4];
			nums[5]=s11[4];
		break;
		case 6:
			names[6]=array[5];
			nums[6]=s11[5];
		break;
		case 7:
			names[7]=array[6];
			nums[7]=s11[6];
		break;
		case 8:
			names[8]=array[7];
			nums[8]=s11[7];
		break;
		case 9:
			names[9]=array[8];
			nums[9]=s11[8];
		break;
		case 10:
			names[10]=array[9];
			nums[10]=s11[9];
		break;
		case 11:
			names[11]=array[10];
			nums[11]=s11[10];
		break;
		case 12:
			names[12]=array[11];
			nums[12]=s11[11];
		break;
		case 13:
			names[13]=array[12];
			nums[13]=s11[12];
		break;
		default:
			cout<<"\n\tChoice a occur Error.\n";
		break;	
	}
}
void Menue_1::menu_num4(){                  //  ----------------------------   num4
	switch(num4){
		case 1:
			names[1]=array[0];
			nums[1]=s11[0];
		break;
		case 2:
			names[2]=array[1];
			nums[2]=s11[1];
		break;
		case 3:
			names[3]=array[2];
			nums[3]=s11[2];
		break;
		case 4:
			names[4]=array[3];
			nums[4]=s11[3];
		break;
		case 5:
			names[5]=array[4];
			nums[5]=s11[4];
		break;
		case 6:
			names[6]=array[5];
			nums[6]=s11[5];
		break;
		case 7:
			names[7]=array[6];
			nums[7]=s11[6];
		break;
		case 8:
			names[8]=array[7];
			nums[8]=s11[7];
		break;
		case 9:
			names[9]=array[8];
			nums[9]=s11[8];
		break;
		case 10:
			names[10]=array[9];
			nums[10]=s11[9];
		break;
		case 11:
			names[11]=array[10];
			nums[11]=s11[10];
		break;
		case 12:
			names[12]=array[11];
			nums[12]=s11[11];
		break;
		case 13:
			names[13]=array[12];
			nums[13]=s11[12];
		break;
		default:
			cout<<"\n\tChoice a occur Error.\n";
		break;	
	}
}
void Menue_1::menu_num1_1(){  //  ----------------------------   num1
	if(num1>13 || num1<0){
    	cout<<"\n\tChoice :1: Error.\n";
    	exit(0);
	}
	else{
		for(int i=1;i<=15;i++){
		if(num1==num_1[i]){
			N_1=names[i];
			n_1=nums[i];
		}
	}
	}
}
void Menue_1::menu_num2_2(){  //  ----------------------------   num2
    if(num2>13 || num2<0){
    	cout<<"\n\tChoice :2: Error.\n";
    	exit(0);
	}
	else{
		for(int i=1;i<=15;i++){
		if(num2==num_1[i]){
			N_2=names[i];
			n_2=nums[i];
		}
	}
	}
	
}
void Menue_1::menu_num3_3(){  //  ----------------------------   num3
	if(num3>13 || num3<0){
    	cout<<"\n\tChoice :3: Error.\n";
    	exit(0);
	}
	else{
		for(int i=1;i<=15;i++){
		if(num3==num_1[i]){
			N_3=names[i];
			n_3=nums[i];
		}
		}
	}
	
}
void Menue_1::menu_num4_4(){ //  ----------------------------   num4
    if(num4>13 || num4<0){
    	cout<<"\n\tChoice :4: Error.\n";
    	exit(0);
	}
	else{
		for(int i=1;i<=15;i++){
		if(num4==num_1[i]){
			N_4=names[i];
			n_4=nums[i];
		}
	}
	}
	
}

void Menue_1::menu_bill(){
	cout<<"\n\t------------------------ Menu Bill Details ---------------------\n\n";
	outfile<<"\n\t------------------------ Menu Bill Details ---------------------\n\n";

	cout<<"\t---------------------- Taxt total is 400.99 $ ------------------\n\n";
	outfile<<"\t---------------------- Taxt total is 400.99 $ ------------------\n\n";

	cout<<"\t-------------------------- Selected Menu -----------------------\n\n";
	outfile<<"\t-------------------------- Selected Menu -----------------------\n\n";

	cout<<"Number 1:  Menu \""<<N_1<<"\" \t"<<"Price  "<<n_1<<"$."<<endl<<endl;
	outfile<<"Number 1:  Menu \""<<N_1<<"\" \t"<<"Price  "<<n_1<<"$."<<endl<<endl;

	cout<<"Number 2:  Menu \""<<N_2<<"\" \t"<<"Price  "<<n_2<<"$."<<endl<<endl;
	outfile<<"Number 2:  Menu \""<<N_2<<"\" \t"<<"Price  "<<n_2<<"$."<<endl<<endl;

	cout<<"Number 3:  Menu \""<<N_3<<"\" \t"<<"Price  "<<n_3<<"$."<<endl<<endl;
	outfile<<"Number 3:  Menu \""<<N_3<<"\" \t"<<"Price  "<<n_3<<"$."<<endl<<endl;

	cout<<"Number 4:  Menu \""<<N_4<<"\" \t"<<"Price  "<<n_4<<"$."<<endl;
	outfile<<"Number 4:  Menu \""<<N_4<<"\" \t"<<"Price  "<<n_4<<"$."<<endl;

	cout<<"\n\t---------------------------- Menu Bill -------------------------\n\n";
	outfile<<"\n\t---------------------------- Menu Bill -------------------------\n\n";

	bill=(n_1+n_2+n_3+n_4)+400.99;
	cout<<"\t\t\t\tTotal Bill : "<<bill<<"$."<<endl;
	outfile<<"\t\t\t\t\t\tTotal Bill : "<<bill<<"$."<<endl;

}




















