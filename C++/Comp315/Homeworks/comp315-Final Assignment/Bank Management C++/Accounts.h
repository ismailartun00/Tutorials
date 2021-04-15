#pragma once
//#include "Interface.h"
#include <iostream>

class Account{
	private:
		int acno;
		char name[50];
		int deposit;
		char type;

	public:
		Account() = default;
        ~Account() = default;
		void create_account();
		void show_account() const;
		void modify();
		void dep(int);
		void draw(int);
		void report() const;
		int retacno() const;
		int retdeposit() const;
		char rettype() const;
        friend std::ostream& operator<<(std::ostream& os, const Account& other){
            os << other.acno << '\t' << other.name << '\t' << other.deposit << '\t' << other.type ;
            return os;
        } 
        friend std::istream& operator>> (std::istream& is, Account& other) {
            std::cout << "Enter your AccountNo then Name then YourDeposit then Your Type : ";
            is>> other.acno >> other.name >> other.deposit >> other.type;
            return is;
        }
        friend int operator- (Account& const, int&); 
};