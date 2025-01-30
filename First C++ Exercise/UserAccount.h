#pragma once
#include <iostream>

class UserAccount
{
private:
	int ID;
	std::string userName;
	std::string password;

public:
	UserAccount(int ID, std::string userName, std::string password);
	bool Login(const std::string& enteredUserName, const std::string& enteredPassword);

	int getId() { return ID; }
};

