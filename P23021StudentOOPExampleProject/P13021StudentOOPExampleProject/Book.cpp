#include "Book.h"

int Book::count = 0;

int Book::getCount() {
	return count;
}

Book::Book() {
	//cout << "Call Student default constructor..." << endl;
	count++;
	name = "no name";
	age = 14;
	mark = 4;
	available = 'o';
}

Book::Book(string name, int age, double mark, char available) {
	count++;
	this->name = name;
	this->age = age;
	this->mark = mark;
	this->available = available;
}

Book::~Book() {
	count--;
	//cout << "Call Student destructor..." << endl;

}

string Book::getName() {
	return name;
}

void Book::setName(string name) {
	this->name = name;
}

int Book::getAge() {
	return age;
}

void Book::setAge(int age) {
	if (age >= MIN_STUDENT_AGE && age <= MAX_STUDENT_AGE) {
		this->age = age;
	}
}

double Book::getMark() {
	return mark;
}

void Book::setMark(double mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
		this->mark = mark;
	}
}

char Book::getAvailable() {
	return available;
}

void Book::setAvailable(char available) {
	if (available == 'o' || available == 'i') {
		this->available = available;
	}
}


string Book::getInfo() {
	return name + ": age = " + to_string(age)
		+ "; mark = " + to_string(mark)
		+ "; available = " + (available == 'o' ? "out of stock" : "in stock");
}