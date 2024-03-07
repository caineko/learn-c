#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int flag = 0;
	int i = 0;
	for (i = 100; i < 201; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}//难搞哦
			flag++;//这里的flag用于记录循环的次数，然后后面的if是利用循环的次数来判断素数的
		}

		if (flag == i - 2)
		{
			printf("%d ",i);
		}
		flag = 0;//归零，不然判断下一个数时记录的循环的次数不是从0开始，会报错
	}
	return 0;
}