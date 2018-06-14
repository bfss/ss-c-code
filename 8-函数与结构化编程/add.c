#include <stdio.h>

int value1, value2, value3;

/* 函数原型
 * 函数名称:compute
 * 参数列表:int x, int y
 * 返回值类型:int
 */
int compute(int x, int y);
int compute2(int x);

int main(void)
{
	
	printf("请输入一个小于50的数字："); 
	scanf_s("%d", &value1);

	
	printf("请再输入一个小于50的数字：");
	scanf("%d", &value2);

	// 函数调用，传入参数：value1,value2,返回int赋值给value3
	value3 = compute(value1, value2);
	printf("%d + %d = %d\n", value1, value2, value3);

	int value4 = 0;
	value4 = compute2(value2);
	printf("%d\n", value4);

	return 0;
}

// 函数定义，与函数原型相同，但是包含函数体
// 第一行叫做函数头，与函数原型相同，但是没有分号
int compute(int x, int y)
// 函数体，用大括号括起，函数被调用时执行
{
	int a = 0;
	// 返回值，return表示函数结束
	return (x + y);
}

int compute2(int x)
{
	if (x > 2)
	{
		return x;
	}
	else
	{
		return -1;
	}

}