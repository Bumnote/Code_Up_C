#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	while (n != 0) {
		printf("%d\n", --n);
	}

	return 0;
}