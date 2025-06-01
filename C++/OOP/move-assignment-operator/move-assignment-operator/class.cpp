#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>

#include "class.h"

using namespace std;

//constructor
Player::Player(string name, const char* club) {
	this->name = new string(name);

	this->club = new char[strlen(club) + 1];
	strcpy(this->club, club);
}

//copy constructor
Player::Player(const Player& src) {
	this->name = new string(*src.name);

	this->club = new char[strlen(src.club) + 1];
	strcpy(this->club, src.club);
}

//copy assignment operator
Player& Player::operator=(const Player& src) {
	if (this != &src) {
		delete name;
		delete[] club;

		this->name = new string(*src.name);

		this->club = new char[strlen(src.club) + 1];
		strcpy(this->club, src.club);
	}
	return *this;
}


//move constructor
Player::Player(Player&& src) {
	this->name = src.name;
	src.name = nullptr;
	
	this->club = src.club;
	src.club = NULL;
}

//move assignment operator
//'this' refers to the destination object, which already exists, has its own data
//move assignment operator moves the resources of source object to the destination object
Player& Player::operator=(Player&& src) {
	if (this != &src) {
		delete name;
		delete[] club;

		this->name = src.name;
		this->club = src.club;

		src.name = NULL;
		src.club = NULL;
	}
	return *this;
}

//destructor
Player::~Player() {
	delete name;
	delete[] club;
}

void Player::display() {
	cout << "Player: " << *name << ",\tclub: " << club << endl;

	cout << endl;
}
