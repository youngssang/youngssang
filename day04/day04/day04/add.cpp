#include <stdio.h>

int main() {

	int a = 99;
	int b = 2;
	
	printf("a % b�� ��� : %d\n", a % b);
	printf("a %% b�� ��� : %d\n", a % b);

	printf("a++�� ���� : %d\n", a++);   //99
	printf("a�� ���� : %d\n", a);     //100

	printf("++a�� ���� : %d\n", ++a);   //101

	return 0;