#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
struct People{
	char name[50];
	char type;
};


class Account: public People{
	private:
		int acno;
		int deposit;

	public:
		Account() = default;
		~Account() = default;
		
		void create_account(){
			system("CLS");
			std::cout<<"\n\t\t\tEnter the Account No. : ";
			std::cin>>acno;
			std::cout<<"\n\n\t\t\tEnter the Name of the Account holder : ";
			std::cin.ignore();
			std::cin.getline(name,50);
			std::cout<<"\n\t\t\tEnter Type of the Account (C/S) : ";
			std::cin>>type;
			type=toupper(type);
			std::cout<<"\n\t\t\tEnter The Initial amount : ";
			std::cin>>deposit;
			std::cout<<"\n\n\t\t\tAccount Created..";
		}

		void show_account() const{
			std::cout<<"\n\t\t\tAccount No. : "<<acno;
			std::cout<<"\n\t\t\tAccount Holder Name : ";
			std::cout<<name;
			std::cout<<"\n\t\t\tType of Account : "<<type;
			std::cout<<"\n\t\t\tBalance amount : "<<deposit;
		}

		void modify(){
			std::cout<<"\n\t\t\tAccount No. : "<<acno;
			std::cout<<"\n\t\t\tModify Account Holder Name : ";
			std::cin.ignore();
			std::cin.getline(name,50);
			std::cout<<"\n\t\t\tModify Type of Account : ";
			std::cin>>type;
			type=toupper(type);
			std::cout<<"\n\t\t\tModify Balance amount : ";
			std::cin>>deposit;
		}

		void dep(int x){
			deposit+=x;
		}

		void draw(int x){
			deposit-=x;
		}

		void report() const{
			std::cout<<acno<<std::setw(10)<<" "<<name<<std::setw(10)<<" "<<type<<std::setw(6)<<deposit<<std::endl;
		}

		int retacno() const{
			return acno;
		}

		int retdeposit() const{
			return deposit;
		}

		char rettype() const{
			return type;
		}
};

struct Other : public Account, public People{
	void write_account(){
		Account ac;
		std::ofstream outFile;
		outFile.open("account.txt",std::ios::binary|std::ios::app);
		ac.create_account();
		outFile.write(reinterpret_cast<char *> (&ac), sizeof(Account));
		outFile.close();
	}

	void display_sp(int n){
		Account ac;
		bool flag=false;
		std::ifstream inFile;//operator <<  cin<<inFile:
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



	void modify_account(int n){
		bool found=false;
		Account ac;
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



	void delete_account(int n){
		Account ac;
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


	void display_all(){
		system("CLS");
		Account ac;
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


	void deposit_withdraw(int n, int option){
		int amt;
		bool found=false;
		Account ac;
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
};



int main(){
	Other temp;
	char ch;
	int num;
	do{
	system("CLS");
	std::cout<<"\n\n\t\t\t\t======================\n";
	std::cout<<"\t\t\t\tBANK MANAGEMENT SYSTEM";
	std::cout<<"\n\t\t\t\t======================\n";

		std::cout<<"\t\t\t\t    ::MAIN MENU::\n";
		std::cout<<"\n\t\t\t\t1. NEW ACCOUNT";
		std::cout<<"\n\t\t\t\t2. DEPOSIT AMOUNT";
		std::cout<<"\n\t\t\t\t3. WITHDRAW AMOUNT";
		std::cout<<"\n\t\t\t\t4. BALANCE ENQUIRY";
		std::cout<<"\n\t\t\t\t5. ALL ACCOUNT HOLDER LIST";
		std::cout<<"\n\t\t\t\t6. CLOSE AN ACCOUNT";
		std::cout<<"\n\t\t\t\t7. MODIFY AN ACCOUNT";
		std::cout<<"\n\t\t\t\t8. EXIT";
		std::cout<<"\n\n\t\t\t\tSelect Your Option (1-8): ";
		std::cin>>ch;

		switch(ch){
		case '1':
			temp.write_account();
			break;
		case '2':
			system("CLS");
			std::cout<<"\n\n\t\t\tEnter The account No. : "; std::cin>>num;
			temp.deposit_withdraw(num, 1);
			break;
		case '3':
			system("CLS");
			std::cout<<"\n\n\t\t\tEnter The account No. : "; std::cin>>num;
			temp.deposit_withdraw(num, 2);
			break;
		case '4':
			system("CLS");
			std::cout<<"\n\n\t\t\tEnter The account No. : "; std::cin>>num;
			temp.display_sp(num);
			break;
		case '5':
			temp.display_all();
			break;
		case '6':
			system("CLS");
			std::cout<<"\n\n\t\t\tEnter The account No. : "; std::cin>>num;
			temp.delete_account(num);
			break;
		 case '7':
		 	system("CLS");
			std::cout<<"\n\n\t\t\tEnter The account No. : "; std::cin>>num;
			temp.modify_account(num);
			break;
		 case '8':
		 	system("CLS");
			std::cout<<"\n\n\t\t\tGoodbye. ";
			break;
		 default :std::cout<<"\a";
		}
		std::cin.ignore();
		std::cin.get();
    }while(ch!='8');
	return 0;
}




