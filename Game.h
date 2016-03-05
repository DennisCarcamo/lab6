#pragma once
#include <iostream>

using std::string;

class Game{
	int id;
	string name;
	int year;
	string developers;
	string genre;
public:
	Game(int id,string name,int year,string developer, string genre);
	int getId();
	void toString() const ;


};