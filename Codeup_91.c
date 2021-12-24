#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n, student;
	int arr[23] = {0,};
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &student);
		arr[student - 1] += 1;
	}
	for (int i = 0; i < 23; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}