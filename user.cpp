
#include "user.h"
#include <iostream>
#include <cstring>
#include <vector>
using std::vector;
using namespace std;

User::User(string nombre,string contra){
	this -> username=nombre;
	this ->password=contra;

}

void User::addGame(int id){
	games.push_back(id);

}
string User::get_password(){
	return password;
}

bool User::deleteGame(int id){
	for (int i = 0; i < games.size; i++){
		if (id==games.at(i).getId()){
			games.erase(games.beggin()+i);
			return true;
		}
	}
	return false;

}

void User::ChangePassword(string password){
	this -> password=pasword;

}

string User::getUsername(){
	return  username;
}

//User::string printgames(){

//}


/*bool isValidPassword(string username, string password){

}*/

string User::toString()const{
	stringstream ss;
	ss<<"Nombre :"<<nombre<<"\n"<<"Password :"<<contra;
	return ss;
}