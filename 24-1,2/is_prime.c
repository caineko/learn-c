 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void is_prime()
{
	for (int i = 100; i < 201; i++)
	{
		int flag = 0;
		for (int j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			flag++;
		}
		if (flag == i - 2)
		{
			printf("%d ", i);
		}
	}
}

int main()
{
	is_prime();
	return 0;
}