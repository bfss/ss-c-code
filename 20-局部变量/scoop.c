#include <stdio.h>

// 一个演示静态变量的函数
void show_static();

int main()
{
	show_static();
	show_static();

	// extern int another_static;
	// printf("as = %d\n", another_static);

	register int reg = 100;
	printf("reg = %d\n", reg);
	
	int block_out = 0;

	// 代码块
	{
		int block_in = 10086;
		printf("in = %d\n", block_in);
		printf("out = %d\n", block_out);
		int block_out = 1111;
		printf("out = %d\n", block_out);
	}
	printf("out = %d\n", block_out);
	// printf("block_in = %d\n", block_in);
	
	return 0;
}

void show_static()
{
	// 一个静态变量
	static int a = 0;
	// 用来对比的普通局部变量
	int b = 0;

	a++;
	b++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
}