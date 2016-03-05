#include "game.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Game::Game(int id, string name, int year, string developers, string genre){
	this-> id=id;
	this-> name=name;
	this-> year=year;
	this-> developers=developers;
	this-> genre=genre;
}

int Game::getId(){
	return id;
}

string Game::toString()const{
	stringstream ss;
	ss<<id<<" "<<name;
	return ss.str();
}
