#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char n;
	int answer = 97;
	scanf("%c", &n);
	while (1) {
		printf("%c ", answer);
		if (answer == n)
			break;
		answer += 1;

	}

	return 0;
}