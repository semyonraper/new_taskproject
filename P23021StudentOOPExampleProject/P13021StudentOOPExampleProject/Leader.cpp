#include "Leader.h"

Leader::Leader() : Book() {
	//cout << "Call Leader default constructor..." << endl;	
	signature = 'o';

}

Leader::Leader(string name, int age, double mark, char available, char signature) : Book(name, age, mark, available) {
		this->signature = signature;

	}


Leader::~Leader(){
	//cout << "Call Leader destructor..." << endl;
}

char Leader::getSignature(){
	return signature;
}

void Leader::setSignature(char signature){
	this->signature = signature;
}



string Leader::getInfo() {
	return Book::getInfo()
		+ "; signature = " + signature;

};