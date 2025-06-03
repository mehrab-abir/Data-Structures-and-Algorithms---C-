#ifndef CORE_H
#define CORE_H

#include<string>
#include<cstring>

using namespace std;


class Nolan {
	char* name;
	int year;
	char* genre;
	string director;
	string* country;
	int current_year;

public:
	Nolan(const char* name, int year);
	Nolan(const Nolan& src);
	Nolan& operator=(const Nolan& src);

	Nolan(Nolan&& src);
	Nolan& operator=(Nolan&& src);

	~Nolan();

	void setNameYear(const char* name, int year);
	void setGenre(const char* genre);
	void displayInfo();
};



#endif