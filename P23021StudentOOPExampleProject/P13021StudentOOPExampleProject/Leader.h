#pragma once
#include "Book.h"

// дочерний класс, производный класс, специализированный класс, потомок, отпрыск, надкласс (подкласс)
// родительский класс, базовый класс, супер класс, предок, обобщающий класс

class Leader : public Book
{
private:	
	char signature;


public:
	Leader();
	Leader(string name, int age, double mark, char sex,
		char signature);
	~Leader();

	char getSignature();
	void setSignature(char signature);


	string getInfo();
};

