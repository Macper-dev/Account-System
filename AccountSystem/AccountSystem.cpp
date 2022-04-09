#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;

int main() {

	string userSigned[2]{ "Frank" };
	string passSigned[2]{ "Frank32" };

	string username;
	string password;

	auto userIsSigned = false;
	auto passIsSigned = false;

	cout << "Enter your Username: ";
	cin >> username;
	cout << "Enter your Password: ";
	cin >> password;

	for (const auto& name : userSigned)
	{
		if (username == name)
		{
			userIsSigned = true;
			break;
		}
	}

	for (const auto& pass : passSigned)
	{
		if (password == pass)
		{
			passIsSigned = true;
			break;
		}
	}

	if (passIsSigned && userIsSigned) {
		std::cout << "Welcome back " << username << "!";
	}
	else {
		std::cout << "Please sign up!";
	}
}