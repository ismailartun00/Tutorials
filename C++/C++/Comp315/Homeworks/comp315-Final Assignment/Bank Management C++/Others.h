#pragma once
#include "Accounts.h"

struct Other : public Account{
	void write_account();
	void display_sp(int);
	void modify_account(int);
	void delete_account(int);
	void display_all();
	void deposit_withdraw(int, int);
};