#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void game() {
	int i = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("%s", "请猜数:>");
		scanf("%d", &input);
		if (input > i)
		{
			printf("猜大了\n");
			continue;
		}
		else if (input < i)
		{
			printf("猜小了\n");
			continue;
		}
		else
		{
			printf("猜对了\n");
			printf("是否清屏,请输入y/n\n");
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
				printf("%s", "您输入的符号有误，请重新输入\n");
				goto next;
			}
			break;
		}

	}
}

void printmenu()
{
	printf("%s", "\n*****猜数字游戏*****\n");
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
			printf("退出游戏\n");
		break;
		default:
			printf("%s\n", "输入错误，请重新输入");
		break;
		}

	} while (in);
	return 0;
}