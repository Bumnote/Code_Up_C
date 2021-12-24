#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[100][100] = { 0, };
	int h, w; // 격자판의 세로와 가로
	scanf("%d %d", &h, &w); 
	int n; // 막대의 개수 
	scanf("%d", &n);
	int l, d, x, y; // 막대의 길이 , 방향, x , y 좌표
	// d = 0 : 가로 오른쪽으로
	// d = 1 : 세로 아래로 
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0) {
			for (int k = 0; k < l; k++) {
				arr[x - 1][y - 1 + k] = 1;
			}
		}
		else {
			for (int k = 0; k < l; k++) {
				arr[x - 1 + k][y - 1] = 1;
			}
		}
	}

	//출력
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}