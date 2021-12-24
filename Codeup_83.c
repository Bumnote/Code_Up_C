#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	long long int h, b, c, s;
	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
	long long int wave = h * b * c * s;
	long long int mega = 8 * 1024 * 1024;
	printf("%.1lf MB", (double)wave / mega);

	return 0;
}