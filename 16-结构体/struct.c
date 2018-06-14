#include <stdio.h>

int main()
{
	// 定义一个结构体，并声明两个结构体变量
	struct coord
	{
		int x;
		int y;
	}first, second = {1,2};
	// 分开声明与定义
	struct coord third, fourth = {5,6};

	printf("坐标为：(%d,%d)\n", second.x, second.y);
	printf("坐标为：(%d,%d)\n", fourth.x, fourth.y);

	// 给结构成员赋值
	first.x = 3;
	first.y = 4;
	// 输出，看一下结果
	printf("坐标为：(%d,%d)\n", first.x, first.y);

	// 结构体互相赋值
	third = first;
	printf("坐标为：(%d,%d)\n", third.x, third.y);
	
	// 一个表示矩形的结构体
	// 成员是对角顶点的坐标
	struct rectangle
	{
		struct coord topleft;
		struct coord bottomright;
	}myrect;

	// 赋值
	myrect.topleft.x = 123;
	// 输出
	printf("%d\n", myrect.topleft.x);

	return 0;
}