#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int y, x;
	int arr[19][19] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		arr[x - 1][y - 1] = 1;
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}