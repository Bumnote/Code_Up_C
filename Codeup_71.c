#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	while (1) {
		scanf("%d", &n);
		if (n != 0)
			printf("%d\n", n);
		else
			break;
	}

	return 0;
}