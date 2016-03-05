#pragma once
#include <string>
#include <cstring>
#include <vector>
using std::vector;
using std::string;

class User{
	string username;
	string password;
	vector <int> games;
public:
	User(string,string);
	bool addGame(int id);
	bool deleteGame(int id);
	void ChangePassword(string password);
	string getUsername();
	string get_password();
	//bool isValidPassword(string username, string password);
	string toString()const;


};