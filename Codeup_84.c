#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int w, h, b;
	scanf("%d %d %d", &w, &h, &b);

	long long int save = w * h * b;
	long long int mega = 8 * 1024 * 1024;
	printf("%.2lf MB", (double)save / mega);

	return 0;
}