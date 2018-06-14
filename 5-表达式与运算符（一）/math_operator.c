/*表达式和数学运算符的示例程序*/
#include <stdio.h>
#include <math.h>

int main()
{
	int x = 25-(2*(10+(8/2)));

	// int除以int结果还是int
	double y = 5 / 3.0;

	int z = 10 % 3;

	printf("x=%d\n", x);

	printf("y=%f\n", y);

	printf("z=%d\n", z);

	printf("10的三次方是：%f\n", pow(10, 3));
	printf("100开平方为：%f\n", sqrt(100.));
	
	

	return 0;
}