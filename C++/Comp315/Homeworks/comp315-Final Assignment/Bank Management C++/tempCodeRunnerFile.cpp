#include "Others.h"
#include <iostream>

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