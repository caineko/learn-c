#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			if (b > c)
			{
				printf("%d %d %d\n", a, b, c);
			}
			else
				printf("%d %d %d\n", a, c, b);
		}
		else
			printf("%d %d %d\n", c, a, b);

	}
	else
		if (a > c)
		{
			printf("%d %d %d\n", b, a, c);
		}
		else
			if (b > c)
			{
				printf("%d %d %d\n", b, c, a);
			}
			else
				printf("%d %d %d\n", c, b, a);
	return 0;
}