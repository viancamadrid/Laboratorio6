#include "user.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

User::User(string username, string password){
	this->username=username;
	this->password=password;
}

bool User::addGame(int id){
	
}

bool User::deleteGame(int id){

}

void User::changePassword(string password){
	
}

string User::getUserName(){
	return username;
}

string User::getPassword(){
	return password;
}

string User::toString()const{
	stringstream ss;
	ss<<username;
	return ss.str();
}
