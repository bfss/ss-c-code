#include <stdio.h>

int Fibonacci(int n);

int main()
{
	// printf("\a\n\v\n");
	// int a = 0;
	// int b = 0;
	// int c = 0;
	// puts("please input 3 numbers:");
	// scanf("%d %d %d", &a, &b, &c);

	// printf("a=%d,b=%d,c=%d\n", a, b, c);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("A");
		}
		printf("\n");
	}

	puts("输入求第几项");
	int a = 0;
	scanf("%d", &a);

	printf("第%d项为:%d\n", a,Fibonacci(a));



	return 0;
}

int Fibonacci(int n)
{
	if (n == 1 || n == 0)
	{
		return n;
	}
	else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
	
}