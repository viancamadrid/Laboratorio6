#pragma once
#include <string>

using std::string;

class Game{
	int id;
	string name;
	int year;
	string developers;
	string genre;
public:
	Game(int id, string name, int year, string developers, string genre);
	int getId();
	string toString()const;
};