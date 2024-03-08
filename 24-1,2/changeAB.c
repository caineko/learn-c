 #define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int A[5] = { 1,2,3,4,5 };
	int B[5] = { 3,4,5,6,7 };
	int sz = sizeof(A) / sizeof(A[0]);
	for (int i = 0; i < sz; i++)
	{
		int tmp = 0;
		tmp = A[i];
		A[i] = B[i];
		B[i] = tmp;
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", B[i]);
	}
	return 0;
}