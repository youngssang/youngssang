#include <stdio.h>

int main() {

	int a = 99;
	int b = 2;
	
	printf("a % b의 결과 : %d\n", a % b);
	printf("a %% b의 결과 : %d\n", a % b);

	printf("a++의 값은 : %d\n", a++);   //99
	printf("a의 값은 : %d\n", a);     //100

	printf("++a의 값은 : %d\n", ++a);   //101

	return 0;