#include <stdio.h>

int largest(int array[],int length);

int main()
{
	int array[4] = { 0,1,2,1 };
	int *ptr_array;
	ptr_array = array;
	printf("%d\n", *ptr_array);
	printf("%d\n", ptr_array);

	ptr_array++;

	printf("%d\n", *ptr_array);
	printf("%d\n", ptr_array);

	printf("%d\n", largest(array, 4));

	return 0;
}

int largest(int array[], int length)
{
	int result = array[0];
	for (int i = 0; i < length; i++)
	{
		if (result < array[i])
		{
			result = array[i];
		}
	}
	return result;
}