#include <iostream>
using namespace std;

class BankAccount {
	string ano;    //°èÁÂ ¹øÈ£
	string owner;  //°èÁÂÁÖ
	int balance;   //ÀÜ°í

public:
	BankAccount(string ano, string owner, int balance); //»ı¼ºÀÚ

	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string getOwner();
	void setBalance(int balance);
	int getBalance();
};