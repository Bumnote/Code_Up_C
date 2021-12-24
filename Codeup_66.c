#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a;
	scanf("%d", &a);
	if (a >= 90 && a <= 100)
		printf("A");
	else if (a >= 70 && a < 90)
		printf("B");
	else if (a >= 40 && a < 70)
		printf("C");
	else if (a >= 0 && a < 40)
		printf("D");

	return 0;
}