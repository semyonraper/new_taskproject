#pragma once
#include "Book.h"

// entity-class
class Group
{
	friend class Manager;

private:
	string name;
	int size;
	Book** list;

public:
	Group();
	Group(string name);
	Group(string name, Book** list, int size);
	~Group();

	void add(Book* book);
	Book* get(int index);
	int getSize();
	string getName();
	void setName(string name);

	string getInfo();
};