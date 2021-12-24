#pragma warning(disable:4996)
#include <stdio.h>


int GCD_number(int a, int b) {
	int GCD;
	if (a > b) {
		for (int i = 1; i <= b; i++) {
			if (a % i == 0 && b % i == 0)
				GCD = i;
		}
	}
	else {
		for (int i = 1; i <= a; i++) {
			if (a % i == 0 && b % i == 0)
				GCD = i;
		}
	}

	return GCD;
}

int LCM_number(int a, int b) {
	int LCM = 0; 
	int num = GCD_number(a, b);
	LCM = a * b / num;

	return LCM; 
}

int main(void) {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int what = LCM_number(a, b);
	int answer = LCM_number(what, c);
	printf("%d", answer);


	return 0;
}