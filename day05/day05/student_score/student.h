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
	int number;       //�й�
	int kor;
	int eng;
	int math;
	int total;        //����
	float avg;        //���
};

enum MENU {
	MENU_INSERT = 1,    //���
	MENU_LIST,          //���
	MENU_SELECT,        //�˻�
	MENU_DELETE,        //����
	MENU_EXIT		    //����
};