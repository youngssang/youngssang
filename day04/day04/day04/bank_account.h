#include <iostream>
using namespace std;

class BankAccount {
	string ano;    //���� ��ȣ
	string owner;  //������
	int balance;   //�ܰ�

public:
	BankAccount(string ano, string owner, int balance); //������

	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string getOwner();
	void setBalance(int balance);
	int getBalance();
};