#include "student.h"
#include <cstring>

//����ü �迭 ��ü ���� �� �Լ� ����

Student studentArr[STUDENT_MAX] = {};  //�迭 ��ü
int stdCount = 0;   //�迭�� �ε��� ��ȣ
int stdNumber = 1;
char searchName[NAME_SIZE];

void insert() {
	cout << "========== �л� ��� ==========" << endl;

	cout << "�̸� : ";
	cin >> studentArr[stdCount].name;

	cin.ignore(1024, '\n');  //'\n' �����ϰ� ���ٷ� �Է� ����
	cout << "�ּ� : ";
	cin.getline(studentArr[stdCount].address, ADDRESS_SIZE);

	cout << "��ȭ��ȣ : ";
	cin.getline(studentArr[stdCount].phone, PHONE_NUMBER_SIZE);

	cout << "���� : ";
	cin >> studentArr[stdCount].kor;

	cout << "���� : ";
	cin >> studentArr[stdCount].eng;

	cout << "���� : ";
	cin >> studentArr[stdCount].math;

	//�й�
	studentArr[stdCount].number = stdNumber;
	stdNumber++;

	//���� ���
	studentArr[stdCount].total = studentArr[stdCount].kor +
		studentArr[stdCount].eng + studentArr[stdCount].math;

	//��� ���
	studentArr[stdCount].avg = (float)studentArr[stdCount].total / 3;

	stdCount++;   //����!! ����� �ݵ�� 1 ���� 
	cout << "===== ��� �Ϸ� =====" << endl;
}

void listAll() {
	cout << "========== �л� ��� ==========" << endl;
	for (int i = 0; i < stdCount; i++) {
		cout << "�й� : " << studentArr[i].number << endl;
		cout << "�̸� : " << studentArr[i].name << endl;
		cout << "�ּ� : " << studentArr[i].address << endl;
		cout << "��ȭ��ȣ : " << studentArr[i].phone << endl;
		cout << "���� : " << studentArr[i].kor << endl;
		cout << "���� : " << studentArr[i].eng << endl;
		cout << "���� : " << studentArr[i].math << endl;
		cout << "���� : " << studentArr[i].total << endl;
		cout << "��� : " << studentArr[i].avg << endl;
	}
}

void select() {
	cout << "========== �л� �˻� ==========" << endl;
	cin.ignore(1024, '\n');
	cout << "�˻��� �̸��� �Է��ϼ���: ";
	cin.getline(searchName, NAME_SIZE);

	//��ϵǾ� �ִ� �л�����ŭ �ݺ��ϸ� �л��� ã��
	for (int i = 0; i < stdCount; i++) {
		if (strcmp(studentArr[i].name, searchName) == 0) {
			//����� �̸��� �˻��� �̸��� ������
			cout << "�й� : " << studentArr[i].number << endl;
			cout << "�̸� : " << studentArr[i].name << endl;
			cout << "�ּ� : " << studentArr[i].address << endl;
			cout << "�ּ� : " << studentArr[i].address << endl;
			cout << "��ȭ��ȣ : " << studentArr[i].phone << endl;
			cout << "���� : " << studentArr[i].kor << endl;
			cout << "���� : " << studentArr[i].eng << endl;
			cout << "���� : " << studentArr[i].math << endl;
			cout << "���� : " << studentArr[i].total << endl;
			cout << "��� : " << studentArr[i].avg << endl;
			break;  //����! 1���� ��ġ�Ǹ� ��������
		}
	}
}

void remove() {
	cout << "========== �л� ���� ==========" << endl;
	cin.ignore(1024, '\n');  //'\n' �����ϰ� ���ٷ� �Է� ����
	cout << "�ּ� : ";
	cin.getline(studentArr[stdCount].address, ADDRESS_SIZE);
	
	for (int i = 0; i < stdCount; i++) {
		if (strcmp(studentArr[i].name, searchName) == 0) {
			for (int j = i; j < stdCount - 1; j++) {
				studentArr[i] = studentArr[i + 1];
			}
			stdCount--; //����! ���� �� �ε��� ��ȣ�� 1 ���� ��Ŵ.
			cout << "�л� ������ �����߽��ϴ�." << endl;
			break;
		}
	}
}