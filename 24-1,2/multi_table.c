 #define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

print_multi_table(int i)
{
	for (int j = 1; j <= i; j++)
	{
		for (int k = 1; k <= j; k++)
		{
			printf("%d*%d=%d\t", k, j, j * k);
		}
		printf("\n");                                                 
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print_multi_table(num);
	return 0;
}