 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);

	int c = a % b;
	
	while (c)
	{
		a = b;
		b = c;
		c = a % b;

	}

	printf("%d", b);
	
	return 0;
}