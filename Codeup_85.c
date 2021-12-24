#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int number;
	int answer = 0;
	int plus = 1;
	scanf("%d", &number);
	while (number > answer) {
		answer += plus;
		plus += 1;
	}
	printf("%d", answer);

	return 0;
}