#pragma once
#include "Header.h"



// entity-class
class Book
{
	friend void changeMark(Book& st);

private:
	static int count;

protected:
	string name;
	int age;
	double mark;
	char available;


public:
	static const int MAX_STUDENT_AGE = 80;
	static const int MIN_STUDENT_AGE = 14;

	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	Book();
	Book(string name, int age, double mark, char available);
	~Book();

	string getName();
	void setName(string n);
	int getAge();
	void setAge(int a);
	double getMark();
	void setMark(double m);
	char getAvailable();
	void setAvailable(char s);

	static int getCount();

	virtual string getInfo();

};