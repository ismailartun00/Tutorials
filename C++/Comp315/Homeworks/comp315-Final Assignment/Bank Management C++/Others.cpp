#include "Others.h"
#include <iostream>
#include <fstream>
#include<cctype>

    Account ac;

	void Other::write_account(){
		std::ofstream outFile;
		outFile.open("account.txt",std::ios::binary|std::ios::app);
		ac.create_account();
		outFile.write(reinterpret_cast<char *> (&ac), sizeof(Account));
		outFile.close();
	}

	void Other::display_sp(int n){
		bool flag=false;
		std::ifstream inFile;
		inFile.open("account.txt",std::ios::binary);
		if(!inFile){
			std::cout<<"File could not be open !! Press any Key...";
			return;
		}
		std::cout<<"\n\t\t\tBALANCE DETAILS\n";
		while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(Account))){
			if(ac.retacno()==n){
				ac.show_account();
				flag=true;
			}
		}
		inFile.close();
		if(flag==false)
			std::cout<<"\n\n\t\t\tAccount number does not exist";
	}

	void Other::modify_account(int n){
		bool found=false;
		std::fstream File;
		File.open("account.txt",std::ios::binary|std::ios::in|std::ios::out);
		if(!File){
			std::cout<<"File could not be open !! Press any Key...";
			return;
		}
		while(!File.eof() && found==false){
			File.read(reinterpret_cast<char *> (&ac), sizeof(Account));
			if(ac.retacno()==n){
				ac.show_account();
				std::cout<<"\n\n\t\t\tEnter The New Details of account"<<std::endl;
				ac.modify();
				int pos=(-1)*static_cast<int>(sizeof(Account));
				File.seekp(pos,std::ios::cur); 
				File.write(reinterpret_cast<char *> (&ac), sizeof(Account));
				std::cout<<"\n\n\t\t\tRecord Updated";
				found=true;
			}
		}
		File.close();
		if(found==false)
			std::cout<<"\n\n\t\t\tRecord Not Found ";
	}

	void Other::delete_account(int n){
		std::ifstream inFile;
		std::ofstream outFile;
		inFile.open("account.txt",std::ios::binary);
		if(!inFile){
			std::cout<<"File could not be open !! Press any Key...";
			return;
		}
		outFile.open("Temp.txt",std::ios::binary);
		inFile.seekg(0,std::ios::beg);
		while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(Account))){
			if(ac.retacno()!=n){
				outFile.write(reinterpret_cast<char *> (&ac), sizeof(Account));
			}
		}
		inFile.close();
		outFile.close();
		remove("account.txt");
		rename("Temp.txt","account.txt");
		std::cout<<"\n\nRecord Deleted ..";
	}

	void Other::display_all(){
		system("cls");
		std::ifstream inFile;
		inFile.open("account.txt",std::ios::binary);
		if(!inFile){
			std::cout<<"File could not be open !! Press any Key...";
			return;
		}
		std::cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
		std::cout<<"====================================================\n";
		std::cout<<"A/c no.      NAME           Type  Balance\n";
		std::cout<<"====================================================\n";
		while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(Account))){
			ac.report();
		}
		inFile.close();
	}

	void Other::deposit_withdraw(int n, int option){
		int amt;
		bool found=false;
		std::fstream File;
		File.open("account.txt", std::ios::binary|std::ios::in|std::ios::out);
		if(!File){
			std::cout<<"File could not be open !! Press any Key...";
			return;
		}
		while(!File.eof() && found==false){
			File.read(reinterpret_cast<char *> (&ac), sizeof(Account));
			if(ac.retacno()==n){
				ac.show_account();
				if(option==1){
					std::cout<<"\n\n\t\t\tTO DEPOSITSS AMOUNT";
					std::cout<<"\n\n\t\t\tEnter The amount to be deposited: ";
					std::cin>>amt;
					ac.dep(amt);
				}
				if(option==2){
					std::cout<<"\n\n\t\t\tTO WITHDRAW AMOUNT";
					std::cout<<"\n\n\t\t\tEnter The amount to be withdraw: ";
					std::cin>>amt;
					int bal=ac.retdeposit()-amt;
					if(bal<0)
						std::cout<<"Insufficience balance";
					else
						ac.draw(amt);
				}
				int pos=(-1)*static_cast<int>(sizeof(ac));
				File.seekp(pos,std::ios::cur);//fn1353
				File.write(reinterpret_cast<char *> (&ac), sizeof(Account));
				std::cout<<"\n\n\t\t\tRecord Updated";
				found=true;
			}
		}
		File.close();
		if(found==false)
			std::cout<<"\n\n\t\t\tRecord Not Found ";
	}