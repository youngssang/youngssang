#include <stdio.h>

int main() {
	//备备窜 茄 窜父 免仿窍扁
	int dan = 1;
	int i, j;

	printf("구구단 : ");
	scanf_s("%d", &dan);
	for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}

	//傈眉 备备窜
	/*for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}*/

	return 0;
}