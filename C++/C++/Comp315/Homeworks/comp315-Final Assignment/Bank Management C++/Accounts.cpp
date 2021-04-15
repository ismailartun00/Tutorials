#include "Accounts.h"
#include <iomanip>
#include<cctype>
		
void Account::create_account(){
    system("cls");
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

void Account::show_account() const{
    std::cout<<"\n\t\t\tAccount No. : "<<acno;
    std::cout<<"\n\t\t\tAccount Holder Name : ";
    std::cout<<name;
    std::cout<<"\n\t\t\tType of Account : "<<type;
    std::cout<<"\n\t\t\tBalance amount : "<<deposit;
}

void Account::modify(){
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

void Account::dep(int x){
    deposit+=x;
}

void Account::draw(int x){
    deposit-=x;
}

void Account::report() const{
    std::cout<<acno<<std::setw(10)<<" "<<name<<std::setw(10)<<" "<<type<<std::setw(6)<<deposit<<std::endl;
}

int Account::retacno() const{
    return acno;
}

int Account::retdeposit() const{
    return deposit;
}

char Account::rettype() const{
    return type;
}
int operator- (Account& const other, int& number){
    return other.deposit - number;
}
