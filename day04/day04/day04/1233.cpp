#include <stdio.h>

void swapByVal(int, int);
void swapByRef(int*, int*);
int main() {
	int a = 1, b = 2;

	printf("==값에 의한 호출==\n");
	swapByVal(a, b);
	printf("a = %d, b = %d\n", a, b);

	printf("==주소에 의한 호출==\n");
	swapByRef(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	void swapByVal(int x, int y) {
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
	void swapByRef(int* x, int* y) {

		int temp;
		temp = *x;
		*x = *y;
		*y = temp;
	}


	return 0;
}