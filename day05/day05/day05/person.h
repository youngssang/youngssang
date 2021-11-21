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
//��� ����Ʈ �ʱ�ȭ

//Person ��� ����
class Employee : public Person {
public:
	int companyID;
	
	Employee(int companyID = 0, string name = "unnamed", int age = 0);
	void showInfo();
};

Employee::Employee(int companyID, string name, int age) : companyID(companyID), Person(name, age) {};
//�ڽ��� ��, �θ� �ڿ� ��ġ

void Employee::showInfo() {
	cout << "�̸� : " << name << endl;
	cout << "���� :" << age << endl;
	cout << "��� : " << companyID << endl;
}