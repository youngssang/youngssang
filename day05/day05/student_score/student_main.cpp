#include "student.h"

void insert();
void listAll();
void select();
void remove();
int main() {
	bool sw = true;
	while (sw) {
		system("cls");
		//�޴� ���
		cout << "1.�л� ���" << endl;
		cout << "2.�л� ���" << endl;
		cout << "3.�л� �˻�" << endl;
		cout << "4.�л� ����" << endl;
		cout << "5.����" << endl;
		cout << "�޴��� �����ϼ��� : ";

		int menu;     //enum MENU menu - ������ ���
		cin >> menu;

		//���ڸ� �Է��� ��� ���� �߻� -> ���� ���۸� �����
		//�Է� ���ۿ� �ִ� '\n' �պκ��� ���ڸ� ������
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
			cout << "����" << endl;
			sw = false;
			break;
		default:
			cout << "�޴��� �߸� �������ϴ�." << endl;
			break;
		}
		system("pause");
	}

	return 0;
}