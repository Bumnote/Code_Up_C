#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int count;
	int n;
	scanf("%d", &count);
reload:
	scanf("%d", &n);
	if (count-- != 0) {
		printf("%d\n", n);
		goto reload;
	}

	return 0;
}