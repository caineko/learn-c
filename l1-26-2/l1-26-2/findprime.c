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
			}//�Ѹ�Ŷ
			flag++;//�����flag���ڼ�¼ѭ���Ĵ�����Ȼ������if������ѭ���Ĵ������ж�������
		}

		if (flag == i - 2)
		{
			printf("%d ",i);
		}
		flag = 0;//���㣬��Ȼ�ж���һ����ʱ��¼��ѭ���Ĵ������Ǵ�0��ʼ���ᱨ��
	}
	return 0;
}