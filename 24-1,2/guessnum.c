#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void game() {
	int i = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("%s", "�����:>");
		scanf("%d", &input);
		if (input > i)
		{
			printf("�´���\n");
			continue;
		}
		else if (input < i)
		{
			printf("��С��\n");
			continue;
		}
		else
		{
			printf("�¶���\n");
			printf("�Ƿ�����,������y/n\n");
			char yn[10] = {0};
		next:
			scanf("%s", yn);
			if (strcmp(yn, "y") == 0)
				system("cls");
			else if (strcmp(yn, "n") == 0)
			{
			}
			else
			{
				printf("%s", "������ķ�����������������\n");
				goto next;
			}
			break;
		}

	}
}

void printmenu()
{
	printf("%s", "\n*****��������Ϸ*****\n");
	printf("********************\n");
	printf("*******1:play*******\n");
	printf("*******0:exit*******\n");
	printf("********************\n");
}

int main() {
	int in = 0;
	srand((unsigned int)time(NULL));
	do {
		printmenu();
		scanf("%d", &in);
		switch (in)
		{
		case 1:
			game();
		break;
		case 0:
			printf("�˳���Ϸ\n");
		break;
		default:
			printf("%s\n", "�����������������");
		break;
		}

	} while (in);
	return 0;
}