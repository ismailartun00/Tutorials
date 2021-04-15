#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
class one{
public:
	void menu1();
	
};
void one::menu1()
{
	
	std::cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO FOOD ORDERING SYSTEM =========="<<std::endl;
	std::cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<std::endl;
	std::cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<std::endl;
	std::cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<std::endl;
    std::cout<<"\n\t======================================================================================================================================="<<std::endl;
}
	class two:public one
	{
	protected:
		int  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
        std::string y,ye;
        public:
    void menu2(){
   std::ofstream write;
   write.open("order.text");
    if(!write){
	    std::cout<<"file can not open"<<std::endl;
	    exit (-1);
    }

    a:
   	    b:
   		    c:
   	std::cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    std::cin>>ch;
    
      
    std::cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
    std::cin>>ye;
 
  if(ye=="y"|| ye=="Y"){
  	   goto b;
  }
  else{
   switch(ch){
   	case 1:
   		std::cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		std::cin>>pizza;
   	
   		a=480;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 2:
   		std::cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		std::cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Exotica : 440";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER  Exotica "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 3:
   		std::cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		std::cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  Chicken Sizzler : 580";
   			write<<" \n";
   				write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 4:
   		std::cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		std::cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chrispy Chicken : 520";
   	write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		write<<"\n";
	    std::cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 5:
   		std::cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		std::cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	    std::cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 6:
   		std::cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		std::cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	    std::cout<<"\n\n\n\tYOU ORDER Country Feast "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 7:
   		std::cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		std::cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Tetrazzini : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		write<<"\n";
   	    std::cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 8:
   		std::cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		std::cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Double Cheese : 540";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	    std::cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
	   case 9:
	       std::cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   	       std::cin>>pizza;
   	
		   i=548;
		   s=s+i*pizza;
		   write<<"YOU ORDER Makizushi : 548";
		   write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER Makizushi "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 10:
   		std::cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT :";
   		std::cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Ham Burger : 390";
   		write<<" \n";
   		write<<"NUMBER OF Ham Burger IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER Ham Burger "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 11:
   		std::cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		std::cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	    std::cout<<"\n\n\n\tYOU ORDER   Margherita "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 12:
   		std::cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		std::cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 13:
   		std::cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		std::cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Fajitas  : 335";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER Fajitas "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 14:
   		std::cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		std::cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Tempura : 324";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER  Tempura "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 15:
   		std::cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		std::cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	   std::cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<std::endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<std::endl;
   	break;
   	
   	case 16:
   		std::cout<<"\n\t\t\t\t\t Brought To You By code-projects.org";
   	exit(0);
   	break;
   	
   	default:
   		std::cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<std::endl;
   		goto c;
   		break;
   }
   std::cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   std::cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	std::cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		std::cout << "...";
	}
   	std::cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						std::cout << "\n\t\t\t\t\t\t\t ================================================"<<std::endl;
						std::cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<std::endl;
						std::cout << "\t\t\t\t\t\t\t ================================================"<<std::endl;
						std::cout << std::endl;
						std::cout << std::endl;

						std::cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<std::endl;
						std::cout << std::endl;
						std::cout << std::endl;
						std::cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<std::endl;
						std::cout << std::endl;
                        std::cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<std::endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						std::cout << "\n\t\t\t\t\t\t\t ================================================"<<std::endl;

   
  write.close();
  }
  void show1()
  {
  	menu1();
  	menu2();
  }
  
};
class three : public one, public two
{
	public:
		void total()
      {
      		long userId; //for user id of administrator
      		
			d:	
			std::cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------";
			std::cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
			std::cin>>userId;
			std::cout<<"\t\t\t\t\t\t\t---------------------";
			if(userId!=1353)  
			{
				std::cout<<"\nDon't try to be smart.....Enter correct id\n";
				goto d;
			}
			else
			std::cout<<"\n\n\n\t\t\t\t\t\t\tHello Code-Projects,\n";
			z:
			std::string pwd="pass";  //password
			std::string pass="";  //empty string
			char c;	
				std::cout<<"\n\n\n\t\t\t\t\t\t\tPassword = "; 
				p:
				c=getch();
				std::cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}   
					
      			{
      			if(pass==pwd)
      			{
      				std::cout<<"\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to our system\n\n\n";
      				system("PAUSE");
      				system("CLS");
      				show1();
				}
				else
				{
				std::cout<<"\nWrong Password\n";
				goto z;
				}
			}
		}
};
int main()
{   
   three ob;
   ob.total();
   getch();
}
