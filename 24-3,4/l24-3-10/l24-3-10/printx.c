#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i == j || i + j == a-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");

	}
	return 0;
}