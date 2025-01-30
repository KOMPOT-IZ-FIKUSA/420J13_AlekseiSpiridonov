#include "UserAccount.h"

UserAccount::UserAccount(int id, std::string userName, std::string password) : ID(id), userName(userName), password(password) {

}

bool UserAccount::Login(const std::string& enteredUserName, const std::string& enteredPassword) {
	return enteredPassword == password && enteredUserName == userName;
}