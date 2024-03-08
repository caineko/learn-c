#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	for (int j = 1; j <= 9; j++) {
		for (int k = 1; k <= j; k++) {
			printf("%d""*""%d""=""%d	",k,j,j*k );
		}
		printf("\n");
	}
	return 0;
}