#include <stdio.h>

int main()
{
	// 定义一个共用体
	// 声明一个共用体变量并初始化第一个成员
	union share
	{
		char c;
		int i;
	}mys = {'a'};

	// 定义与声明分开
	union share mys2 = { 'b' };

	printf("mys.c=%c\n", mys.c);

	// 声明一个指针
	union share *p_s;
	p_s = &mys2;
	printf("mys2.c=%c\n", p_s->c);

	// 不要试图同时使用不同成员
	// 出现值互相覆盖的情况
	// V的ASCII值为86
	mys.i = 86;
	printf("mys.i=%d\n", mys.i);
	printf("mys.c=%c\n", mys.c);

	// b的ASCII值为98
	mys.c = 'b';
	printf("mys.i=%d\n", mys.i);
	printf("mys.c=%c\n", mys.c);
	
	// 共用体大小
	printf("share的大小为：%d字节\n", sizeof(union share));

	// 使用typedef, 以struct举例，union类似
	
	typedef struct
	{
		int x;
		int y;
	}coord;

	struct mys
	{
		int i;
	}m2 = {2};

	typedef struct mys m;

	m m1 = { 1 };

	coord mycoord = {1,2};
	printf("mucoord.x=%d\n", mycoord.x);

	return 0;
}