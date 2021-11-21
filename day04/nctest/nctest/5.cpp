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