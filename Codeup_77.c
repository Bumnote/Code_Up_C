#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char n;
	while (1) {
		scanf(" %c", &n);
		if (n == 'q') {
			printf("%c", n);
			break;
		}
		else
			printf("%c\n", n);
	}

	return 0;
}