#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	int num = 0;
	while (i <= 100)
	{
		if (i % 10 == 9||i / 10==9)
		{
			num++;
			sum += num;
		}
		i++;
	}
	printf(sum);
	return 0;
}