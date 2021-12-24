#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	long long int a, m, d, n;
	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
	for (int i = 1; i < n; i++) {
		a *= m;
		a += d;
	}
	printf("%lld", a);

	return 0;
}