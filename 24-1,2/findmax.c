#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int num[10] = { 0 };
	int input = 0;
	for (int i = 0; i <= 9; i++)
	{

		scanf("%d", &input);
		num[i] = input;
	}

	int i = 0;
	for (i = 0; i < 10; i++) 
	{
		if (num[0] < num[i])
		{
			num[0] = num[i];
		}
		
	}

	printf("\n%d\n", num[0]);
	return 0; 
}