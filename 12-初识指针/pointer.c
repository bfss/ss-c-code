#include <stdio.h>

int main()
{
	int a = 1;
	int *ptr;
	ptr = &a;
	printf("a的地址：%d\n", ptr);
	printf("a的地址：%d\n", &a);
	printf("a=%d\n", *ptr);

	int data[4] = { 1,2,3,4 };
	printf("%d\n", &data[0]);
	printf("%d\n", data);

	int *p_data;
	p_data = data;
	printf("%d\n", p_data);

	printf("0-%d\n", &data[0]);
	printf("1-%d\n", &data[1]);
	printf("2-%d\n", &data[2]);
	printf("3-%d\n", &data[3]);




	return 0;
}