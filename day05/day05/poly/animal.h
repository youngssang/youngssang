#include <iostream>
using namespace std;

class Animal {
public:

	void breathe() {
		cout << "¼ûÀ» ½±´Ï´Ù." << endl;
	}
	virtual void cry() {};  //±¸ÇöÀ» ÇÏÁö ¾ÊÀº °¡»óÇÔ¼ö
};

class Cat : public Animal {
public:
	void cry() {
		cout << "¾ß ~ ¿Ë!!" << endl;
	}
};

class Dog : public Animal {
public :
	void cry() {
		cout << "¸Û ~ ¸Û" << endl;
	}

};