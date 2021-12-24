#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int y = 2;
	int x = 2;
	int arr[11][11] = { 0, };

	//입력 
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	//초기 단계 설정
	if (arr[x][y] != 2)
		arr[x][y] = 9;
	else {
		arr[x][y] = 9;
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
	
	// 먹이를 찾아가는 과정 
	while (1) {
		while (arr[x][y + 1] != 1) {
			if (arr[x][y + 1] == 2) {
				y++;
				break;
			}
			arr[x][y + 1] = 9;
			y++;
		}
		while (arr[x + 1][y] != 1 && arr[x][y] != 2)  {
			if (arr[x + 1][y] == 2) {
				x++;
				break;
			}
			arr[x + 1][y] = 9;
			x++;
			if (arr[x][y + 1] != 1)
				break;
		}

		if (arr[x][y] == 2) {
			arr[x][y] = 9;
			break;
		} 
		if (arr[x + 1][y] == 1 && arr[x][y + 1] == 1)
			break;
	}

	//출력 
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}