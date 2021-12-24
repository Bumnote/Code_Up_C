#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[19][19] = { 0, };
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			scanf("%d", &arr[i][j]);
		
		}
	}

	int n;
	scanf("%d", &n);
	int x, y;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for (int k = 0; k < 19; k++) {
			for (int w = 0; w < 19; w++) {
				if (arr[k][y-1] == 1)
					arr[k][y-1] = 0;
				else
					arr[k][y-1] = 1;
			}
			for (int w = 0; w < 19; w++) {
				if (arr[x-1][w] == 1)
					arr[x-1][w] = 0;
				else
					arr[x-1][w] = 1;
			}
		}
	}

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	 

	return 0;
}