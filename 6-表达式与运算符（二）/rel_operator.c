#include <stdio.h>

int main()
{
	int value = 6;
	int another = 5;

	printf("%d\n", value == another);

	if (value < another)
	{
		printf("小于\n");
	}
	else if(value>another)
	{
		printf("大于\n");
	}
	else
	{
		printf("等于\n");
	}
	
		
	if (-6)
	{
		printf("这句话被执行了\n");
	}

	if (4 == 7)
	{
		printf("这句话也被执行了\n");
	}

	int x = 3;
	if (x=2)
	{
		printf("x=%d", x);
		printf("这个例子成功了\n");
	}
	

	printf("这句话并没有什么用\n");

	return 0;
}