#include "Game.h"
#include <cstring>
#include <sstream>


using namespace std;

Game::Game(int id,string name,int year,string developer, string genre){
	this -> id=id;
	this -> name=name;
	this -> year=year;
	this -> developers=developer;
	this -> genre=genre;
} 

int Game::getId(){
	return id;
}

string Game::toString() const {
	stringstream ss;
	ss<<"ID"<<id<<"\n"<<"Nombre :"<<name<<"\n"<<"desarrolador :"<<developers<<"\n"<<"year "<<year;
	return "nnnnnnnnnnnnnno"
}
