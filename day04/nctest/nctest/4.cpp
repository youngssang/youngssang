#include <stdio.h>

int main() {

	int dan, i;


	printf("Gugudan : ");
	scanf_s("%d", &dan);
	for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}

	return 0;
}

	
	