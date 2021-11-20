/*#include <iostream>
#include <cstring>
using namespace std;

struct Student {   //멤버는 기본 public
	string name;
	int grade;
	string phone;
};

int main() {
	//자료 생성 및 저장
	Student s1 = Student();    //s1 = 구조체의 변수이다.
	s1.name = "김하나";
	s1.grade = 3;
	

	//객체 배열로 생성
	Student s[3] = {
		{ "노영상", 1, "010-1111-5555" },
		{ "김민지", 2, "010-2222-5555" },
		{ "가나다", 3, "010-3333-5555" }
	};


	//자료 출력
	cout << s1.name << "학생은 " << s1.grade << "학년입니다." << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << s[i].name << "학생은 "
			<< s[i].grade << "학년이고, 전화번호는 "
			<< s[i].phone << "입니다." << endl;
	}


	return 0;
}*/