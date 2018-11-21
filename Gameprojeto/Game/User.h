#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Account.h"

#pragma once
class User: virtual public Account
{
public:
	User();
	~User();
	void Register();
	void Login();	
	
protected:
	std::string userName, passWord, userNameC, passWordC;
	std::vector <std::string> uStack, pStack; 	
	std::string uNameLog, passwLog;
	std::ofstream reg;
	std::ifstream regIn;
	std::vector <std::string>::iterator itU, itP;
	
	
};

