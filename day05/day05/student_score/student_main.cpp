#include "student.h"

void insert();
void listAll();
void select();
void remove();
int main() {
	bool sw = true;
	while (sw) {
		system("cls");
		//메뉴 출력
		cout << "1.학생 등록" << endl;
		cout << "2.학생 목록" << endl;
		cout << "3.학생 검색" << endl;
		cout << "4.학생 삭제" << endl;
		cout << "5.종료" << endl;
		cout << "메뉴를 선택하세요 : ";

		int menu;     //enum MENU menu - 열거형 상수
		cin >> menu;

		//문자를 입력할 경우 에러 발생 -> 에러 버퍼를 비워줌
		//입력 버퍼에 있는 '\n' 앞부분의 문자를 지워줌
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1024, '\n');
		}

		switch (menu) {
		case MENU_INSERT:
			insert();
			break;
		case MENU_LIST:
			listAll();
			break;
		case MENU_SELECT:
			select();
			break;
		case MENU_DELETE:
			remove();
			break;
		case MENU_EXIT:
			cout << "종료" << endl;
			sw = false;
			break;
		default:
			cout << "메뉴를 잘못 눌렀습니다." << endl;
			break;
		}
		system("pause");
	}

	return 0;
}