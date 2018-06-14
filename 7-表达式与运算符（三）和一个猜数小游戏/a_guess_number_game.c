/*一个控制台猜数游戏，玩家猜测随机数*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int rand_number = 0;  // 随机生成的数字
	int input_number = 0; // 用户输入的数字
	int count = 0;        // 计数猜测次数
	int flag = 1;         // 用来控制while循环

	// 生成随机数(伪随机数)
	srand((unsigned)time(NULL));
	rand_number = rand();

	// printf("%d\n", rand_number);

	printf("一个简单的猜随机数游戏\n");
	printf("制作者：北方素素\n");

	while (flag)
	{
		// 获取用户输入
		printf("请输入一个0到%d的数字：",RAND_MAX);
		scanf("%d", &input_number);

		count++;

		if (input_number == rand_number)
		{
			printf("猜对了，你一共猜了%d次！\n", count);
			flag = 0;
		}
		else if (input_number < rand_number)
		{
			printf("猜小了.\n");
		}
		else
		{
			printf("猜大了.\n");
		}
	}
	
	// 让程序暂停一下
	system("PAUSE");
	return 0;
}