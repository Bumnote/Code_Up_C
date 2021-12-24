#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char name;
	scanf("%c", &name);
	switch (name) {
	case 'A':
		printf("best!!!");
		break;
	case 'B':
		printf("good!!");
		break;
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly~");
		break;
	default:
		printf("what?");
	}

	return 0;
}