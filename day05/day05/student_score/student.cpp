#include "student.h"
#include <cstring>

//구조체 배열 객체 생성 및 함수 정의

Student studentArr[STUDENT_MAX] = {};  //배열 객체
int stdCount = 0;   //배열의 인덱스 번호
int stdNumber = 1;
char searchName[NAME_SIZE];

void insert() {
	cout << "========== 학생 등록 ==========" << endl;

	cout << "이름 : ";
	cin >> studentArr[stdCount].name;

	cin.ignore(1024, '\n');  //'\n' 무시하고 한줄로 입력 받음
	cout << "주소 : ";
	cin.getline(studentArr[stdCount].address, ADDRESS_SIZE);

	cout << "전화번호 : ";
	cin.getline(studentArr[stdCount].phone, PHONE_NUMBER_SIZE);

	cout << "국어 : ";
	cin >> studentArr[stdCount].kor;

	cout << "영어 : ";
	cin >> studentArr[stdCount].eng;

	cout << "수학 : ";
	cin >> studentArr[stdCount].math;

	//학번
	studentArr[stdCount].number = stdNumber;
	stdNumber++;

	//총점 계산
	studentArr[stdCount].total = studentArr[stdCount].kor +
		studentArr[stdCount].eng + studentArr[stdCount].math;

	//평균 계산
	studentArr[stdCount].avg = (float)studentArr[stdCount].total / 3;

	stdCount++;   //주의!! 등록후 반드시 1 증가 
	cout << "===== 등록 완료 =====" << endl;
}

void listAll() {
	cout << "========== 학생 목록 ==========" << endl;
	for (int i = 0; i < stdCount; i++) {
		cout << "학번 : " << studentArr[i].number << endl;
		cout << "이름 : " << studentArr[i].name << endl;
		cout << "주소 : " << studentArr[i].address << endl;
		cout << "전화번호 : " << studentArr[i].phone << endl;
		cout << "국어 : " << studentArr[i].kor << endl;
		cout << "영어 : " << studentArr[i].eng << endl;
		cout << "수학 : " << studentArr[i].math << endl;
		cout << "총점 : " << studentArr[i].total << endl;
		cout << "평균 : " << studentArr[i].avg << endl;
	}
}

void select() {
	cout << "========== 학생 검색 ==========" << endl;
	cin.ignore(1024, '\n');
	cout << "검색할 이름을 입력하세요: ";
	cin.getline(searchName, NAME_SIZE);

	//등록되어 있는 학생수만큼 반복하며 학생을 찾음
	for (int i = 0; i < stdCount; i++) {
		if (strcmp(studentArr[i].name, searchName) == 0) {
			//저장된 이름과 검색한 이름이 같으면
			cout << "학번 : " << studentArr[i].number << endl;
			cout << "이름 : " << studentArr[i].name << endl;
			cout << "주소 : " << studentArr[i].address << endl;
			cout << "주소 : " << studentArr[i].address << endl;
			cout << "전화번호 : " << studentArr[i].phone << endl;
			cout << "국어 : " << studentArr[i].kor << endl;
			cout << "영어 : " << studentArr[i].eng << endl;
			cout << "수학 : " << studentArr[i].math << endl;
			cout << "총점 : " << studentArr[i].total << endl;
			cout << "평균 : " << studentArr[i].avg << endl;
			break;  //주의! 1명이 일치되면 빠져나옴
		}
	}
}

void remove() {
	cout << "========== 학생 삭제 ==========" << endl;
	cin.ignore(1024, '\n');  //'\n' 무시하고 한줄로 입력 받음
	cout << "주소 : ";
	cin.getline(studentArr[stdCount].address, ADDRESS_SIZE);
	
	for (int i = 0; i < stdCount; i++) {
		if (strcmp(studentArr[i].name, searchName) == 0) {
			for (int j = i; j < stdCount - 1; j++) {
				studentArr[i] = studentArr[i + 1];
			}
			stdCount--; //주의! 삭제 후 인덱스 번호를 1 감소 시킴.
			cout << "학생 정보를 삭제했습니다." << endl;
			break;
		}
	}
}