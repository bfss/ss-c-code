/*计算两个数的和*/
#include <stdio.h>

int value1, value2, value3;

int compute(int x, int y);

int main(void)
{
	// 从键盘获取第一个数字
	printf("请输入一个小于50的数字："); // 从键盘获取第一个数字
	scanf_s("%d", &value1);

	// 从键盘获取第二个数字
	printf("请再输入一个小于50的数字：");
	scanf("%d", &value2);

	// 计算两个数的和并在控制台输出
	value3 = compute(value1, value2);
	printf("%d + %d = %d\n", value1, value2, value3);

	return 0;
}

// 返回两个数之和的函数
int compute(int x, int y)
{
	return (x + y);
}