#include <iostream>
#include <string>
#include "UserAccount.h"


std::string askForUsername() {
	while (true) {
		if (std::cin.fail()) {
			std::cin.clear();
		}

		std::cout << "Enter username: ";

		std::string username;
		std::getline(std::cin, username);


		if (!std::cin.fail()) {
			return username;
		}
		else {
			std::cout << "Error" << std::endl;
		}
		

	}
}

std::string askForPassword() {
	while (true) {
		if (std::cin.fail()) {
			std::cin.clear();
		}

		std::cout << "Enter password: ";
		std::string password;

		std::getline(std::cin, password);

		if (!std::cin.fail()) {
			return password;
		}
		else {
			std::cout << "Error" << std::endl;
		}
	}
}

int askForId() {
	while (true) {
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		std::cout << "Enter user id: ";
		int id;

		std::cin >> id;


		if (!std::cin.fail()) {
			if (std::cin.peek() == '\n') {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				return id;
			}
			else {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}

		std::cout << "Enter a valid number." << std::endl;
	}
}

int main() {
	int id = askForId();
	std::string enteredUsername = askForUsername();
	std::string enteredPassword = askForPassword();
	
	UserAccount account = UserAccount(id, enteredUsername, enteredPassword);

	bool success = false;

	while (!success) {
		std::cout << std::endl << "Log in:" << std::endl;
		std::string logInUsername = askForUsername();
		std::string logInPassword = askForPassword();
		if (account.Login(logInUsername, logInPassword)) {
			std::cout << "Login successful!" << std::endl;
			std::cout << "Account ID: " << account.getId();
			success = true;
		}
		else {
			std::cout << "Invalid usernameo or password." << std::endl << "Try again" << std::endl;
		}
	}

	
}
