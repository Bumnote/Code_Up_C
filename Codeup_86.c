#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 3 != 0)
			printf("%d ", i);
	}

	return 0;
}