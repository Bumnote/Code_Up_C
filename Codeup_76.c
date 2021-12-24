#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int answer = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0)
			answer += i;
	}
	printf("%d", answer);

	return 0;
}