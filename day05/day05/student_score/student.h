#include <iostream>
using namespace std;

#define STUDENT_MAX 10
#define NAME_SIZE 20
#define ADDRESS_SIZE 100
#define PHONE_NUMBER_SIZE 14

struct Student {
	char name[NAME_SIZE];
	char address[ADDRESS_SIZE];
	char phone[PHONE_NUMBER_SIZE];
	int number;       //학번
	int kor;
	int eng;
	int math;
	int total;        //총점
	float avg;        //평균
};

enum MENU {
	MENU_INSERT = 1,    //등록
	MENU_LIST,          //목록
	MENU_SELECT,        //검색
	MENU_DELETE,        //삭제
	MENU_EXIT		    //종료
};