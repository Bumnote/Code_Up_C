#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main(void) {

	char name[21];
	scanf("%s", name);
	
	for (int i = 0; i < strlen(name); i++) {
		printf("'%c'\n", name[i]);
	}

	return 0;
}