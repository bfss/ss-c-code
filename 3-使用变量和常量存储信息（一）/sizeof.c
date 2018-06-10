#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{

	printf("一个float类型占用 %d 字节\n", sizeof(float));
	printf("一个int类型占用 %d 字节\n", sizeof(int));
	printf("一个short类型占用 %d 字节\n", sizeof(short));
		
	printf("char类型最大值为：%i\n", CHAR_MAX);
	printf("char类型最小值为：%i\n", CHAR_MIN);

	printf("short类型最大值为：%i\n", SHRT_MAX);
	printf("short类型最小值为：%i\n", SHRT_MIN);

	printf("int类型最大值为：%i\n", INT_MAX);
	printf("int类型最小值为：%i\n", INT_MIN);

	printf("long类型最大值为：%li\n", LONG_MAX);
	printf("long类型最小值为：%li\n", LONG_MIN);

	printf("long long类型最大值为：%lli\n", LLONG_MAX);
	printf("long long类型最小值为：%lli\n", LLONG_MIN);

	printf("unsigned char类型最大值为：%u\n", UCHAR_MAX);

	printf("unsigned short类型最大值为：%u\n", USHRT_MAX);

	printf("unsigned int类型最大值为：%u\n", UINT_MAX);

	printf("unsigned long类型最大值为：%lu\n", ULONG_MAX);

	printf("unsigned long long类型最大值为：%llu\n", ULLONG_MAX);

	printf("float类型能表示的最大值为：%e\n", FLT_MAX);
	printf("float类型能表示的最小值为：%e\n", FLT_MIN);

	printf("double类型能表示的最大值为：%e\n", DBL_MAX);
	printf("double类型能表示的最小值为：%e\n", DBL_MIN);

	return 0;
}