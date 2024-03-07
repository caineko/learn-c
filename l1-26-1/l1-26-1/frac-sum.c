#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	double sum = 0;
	int i = 0;
	int x = 1;

	for (i = 1; i <= 100; i++)
	{
		double one = (1.0 / i) * x;
		x = -x;
		sum += one;
	}

	printf("%lf", sum);
	return 0;
}