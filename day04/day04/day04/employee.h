#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	int age;

public:
	Employee(string name = "unnamed", int age = 0);  //선언부 초기화

	string getName();  //get+멤버이름(){}
	void setName(string name);
	int getAge();
	void setAge(int age);
	void showInfo();
};

Employee::Employee(string name, int age) {    //구현(정의)부
	this->name = name;
	this->age = age;
}

string Employee::getName() { return name; }

void Employee::setName(string name) { this->name = name; }

int Employee::getAge() { return age; }

void Employee::setAge(int age) { this->age = age; }