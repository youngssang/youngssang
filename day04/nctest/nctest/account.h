#include <iostream>
#include <string>
using namespace std;

class account {


private:
	string ano;
	string owner;
	int balance;

public:
	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string getOwner();
	void setBalance(int balance);
	int getBalance();
}