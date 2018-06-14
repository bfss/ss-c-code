#include <stdio.h>

int main()
{
	// 逻辑运算符举例
	printf("与运算同真为真：%d\n", (3 < 2) && (4 == 4));
	printf("或运算同假为假：%d\n", (3 == 2) || (4 > 4));
	printf("非运算真假互换：%d\n", !(3 > 2) );

	int a = 5, b = 6, c = 5, d = 1;

	printf("%d\n", a < b || a < c&&c < d);
	printf("%d\n", a > b || !a < c&&c < d);

	int x = 1;
	printf("x+5=%d\n", x += 5);

	printf("条件运算符：%d\n", 1 ? 3 : 5);
	printf("条件运算符：%d\n", 0 ? 3 : 5);

	int y = 0, z = 4;
	printf("逗号运算符：%d\n", (y++, z++));

	return 0;
}