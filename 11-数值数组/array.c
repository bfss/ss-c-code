#include <stdio.h>

int main()
{
	int expenses[12];
	
	for (int i = 0; i < 12; i++)
	{
		expenses[i] = i;
	}

	for (int i = 0; i < 12; i++)
	{
		printf("%d\n", expenses[i]);
	}

	int array[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("下标为%d,%d的元素是%d\n",j,i, array[j][i]);
		}
	}
	
	printf("array的大小为%d\n", sizeof(array));


	return 0;
}