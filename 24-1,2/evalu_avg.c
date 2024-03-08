 #define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int sum = 0;
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	double avg = sum / 10.0;
	printf("%lf", avg);
//求10个数的平均值
	return 0;
}