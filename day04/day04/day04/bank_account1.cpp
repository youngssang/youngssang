#include "bank_account.h"

BankAccount::BankAccount(string ano, string owner, int balance) {
	this->ano = ano;
	this->owner = owner;
	this->balance = balance;
}

void BankAccount::setAno(string ano) {
	this->ano = ano;
}

string BankAccount::getAno() {
	return ano;
}

void BankAccount::setOwner(string owner) {
	this->owner = owner;
}

string BankAccount::getOwner() {
	return owner;
}

void BankAccount::setBalance(int balance) {
	this->balance = balance;
}

int BankAccount::getBalance() {
	return balance;
}