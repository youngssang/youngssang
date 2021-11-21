#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string name;
	int age;

	Person(string name = "unnamed", int age = 0);
};
/*Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}*/
Person::Person(string name, int age) : name(name), age(age) {};
//멤버 리스트 초기화

//Person 상속 받음
class Employee : public Person {
public:
	int companyID;
	
	Employee(int companyID = 0, string name = "unnamed", int age = 0);
	void showInfo();
};

Employee::Employee(int companyID, string name, int age) : companyID(companyID), Person(name, age) {};
//자식이 앞, 부모가 뒤에 위치

void Employee::showInfo() {
	cout << "이름 : " << name << endl;
	cout << "나이 :" << age << endl;
	cout << "사번 : " << companyID << endl;
}