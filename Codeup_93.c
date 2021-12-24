#pragma warning(disable:4996)
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(void) {

	int min = INT_MAX;
	int n; 
	scanf("%d", &n);
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", p + i);
		if (min > *(p + i))
			min = *(p + i);
	}
	printf("%d", min);

	return 0;
}