#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int front, back;
	scanf("%d-%d", &front, &back);
	printf("%06d%07d", front, back);

	return 0;
}