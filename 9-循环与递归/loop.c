#include <stdio.h>

int factorial(int n);

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", i);
	}
	printf("for over\n");


	int count = 0;
	while (count < 5)
	{
		printf("%d\n", count);
		count++;
	}
	printf("while over\n");


	int count2 = 0;
	do
	{
		printf("%d\n", count2);
		count2++;
	} while (count2<5);
	printf("do...while over\n");


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("j");
		}
		
		printf("\n");
	}

	int result = 1;
	for (int i = 1; i < 6; i++)
	{
		result = result * i;
	}
	printf("5!=%d\n", result);


	printf("µÝ¹é¼ÆËã3!=%d\n", factorial(3));
	return 0;
}

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n = n * factorial(n - 1);
	}
}