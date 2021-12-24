#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char name[2001];
	fgets(name,2000,stdin);
	printf("%s", name);

	return 0;
}