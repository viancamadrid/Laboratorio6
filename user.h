#pragma once
#include <string>
#include <vector>
#include <cstring>

using std::string;
using std::vector;

class User{
	string username;
	string password;
	vector<int> games;
public:
	User(string,string);
	bool addGame(int id);
	bool deleteGame(int id, int pos);
	void changePassword (string password);
	string getUserName();
	string getPassword();
	string toString()const;
};