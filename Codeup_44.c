#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n%.1f", a + b + c, (a + b + c) / (float)3);

	return 0;
}