#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[100][100] = { 0, };
	int h, w; // �������� ���ο� ����
	scanf("%d %d", &h, &w); 
	int n; // ������ ���� 
	scanf("%d", &n);
	int l, d, x, y; // ������ ���� , ����, x , y ��ǥ
	// d = 0 : ���� ����������
	// d = 1 : ���� �Ʒ��� 
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

	//���
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}