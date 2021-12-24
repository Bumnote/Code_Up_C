#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int answer = 1;
	int sum = 0;
	scanf("%d", &n);

	while (1) {
		sum += answer;
		if (n <= sum)
			break;
		answer += 1;
	}
	printf("%d", answer);

	return 0;
}