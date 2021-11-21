#include <iostream>
using namespace std;

class Animal {
public:

	void breathe() {
		cout << "���� ���ϴ�." << endl;
	}
	virtual void cry() {};  //������ ���� ���� �����Լ�
};

class Cat : public Animal {
public:
	void cry() {
		cout << "�� ~ ��!!" << endl;
	}
};

class Dog : public Animal {
public :
	void cry() {
		cout << "�� ~ ��" << endl;
	}

};