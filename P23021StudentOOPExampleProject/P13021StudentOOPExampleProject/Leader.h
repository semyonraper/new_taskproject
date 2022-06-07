#pragma once
#include "Book.h"

// �������� �����, ����������� �����, ������������������ �����, �������, �������, �������� (��������)
// ������������ �����, ������� �����, ����� �����, ������, ���������� �����

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

