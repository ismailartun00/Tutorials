#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
class Initialize_1{
	public:
		string s1,s2,s3,s4,s5,s6,s7;
};
class Staff:public Initialize_1{
	public:
		void Detail_Staff(){
			ofstream out7;
			out7.open("bill.txt",ios::out | ios::app);
			cout<<"=> ABOUT THE STAFF\n\n";
			out7<<"\n\n=> ABOUT THE STAFF\n\n";
			cout<<"\tThere are several categories of personnel in the restaurant business:\n\tmanagers,chefs,cooks,serves,buspersons,dishwashers,hosts and bartenders.\n\n\n";
			out7<<"\tThere are several categories of personnel in the restaurant business:\n\tmanagers,chefs,cooks,serves,buspersons,dishwashers,hosts and bartenders.\n\n\n";
		}
};
class Staff_Business: public Staff{  // Use a Inheritence
	public:
		void Manager(){
			s1="The most important employes in many restaurants is the manager. Only one manager to this restaurant.";
			cout<<"MANAGER : "<<s1<<"\n\n";
		}
		void Chefs(){
			s2="At some restaurants, the star attraction is the chef. Two chefs of this restaurant.";
			cout<<"CHEFS : "<<s2<<"\n\n";
		}
		void Cooks(){
			s3="When you start out,you'll probably need three cooks \"Two full time and one part time\".\nTen cooks are working in this restaurant.";
			cout<<"COOKS : "<<s3<<"\n\n";
		}
		void Dishwashers(){
			s4="As the job title implies, dishwashers keep clean dishes available in your restaurant.\nFiften of people who are working dishwasheers jobs.";
			cout<<"DISHWASHERS : "<<s4<<"\n\n";
		}
		void Serves(){
			s5="Finding the right serving staff is just as important as finding the right manager.\nHere best serves staff are job working.";
			cout<<"SERVES : "<<s5<<"\n\n";
		}
		void Hosts(){
			s6="Depending on the size and style of your restaurant, you may need someone to seat guests,\ntake reservations and sometimes act as cashier.\nIn this restaurant best hosts are hire that high proformence of restaurant.";
			cout<<"HOSTS : "<<s6<<"\n\n";
		}
		void Bartenders(){
			s7="If you have a small bar in your restaurant and it's only open at night,one bartendar,\nwith a couple of backups available,will probably be sufficient.\nDay and Night both time provide a best quilty of things.";
			cout<<"BARTENDERS : "<<s7<<"\n\n";
		}
		void save_data(){
			ofstream out8;
			out8.open("bill.txt",ios::out | ios::app);
			out8<<"MANAGER : "<<s1<<"\n\n";
			out8<<"CHEFS : "<<s2<<"\n\n";
			out8<<"COOKS : "<<s3<<"\n\n";
			out8<<"DISHWASHERS : "<<s4<<"\n\n";
			out8<<"SERVES : "<<s5<<"\n\n";
			out8<<"HOSTS : "<<s6<<"\n\n";
			out8<<"BARTENDERS : "<<s7<<"\n\n";
		}	
};
