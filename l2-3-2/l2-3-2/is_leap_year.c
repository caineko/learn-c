 #define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int i = 0;
void is_leap_year(i)
{
	if (i % 4 == 0 &&i %100 !=0 ||i %400 == 0)
	{
		printf("%d是闰年",i);
	}
	else
	{
		printf("%d不是闰年", i);
	}
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	is_leap_year(year);
	return 0;
}