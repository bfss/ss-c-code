#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{

	printf("һ��float����ռ�� %d �ֽ�\n", sizeof(float));
	printf("һ��int����ռ�� %d �ֽ�\n", sizeof(int));
	printf("һ��short����ռ�� %d �ֽ�\n", sizeof(short));
		
	printf("char�������ֵΪ��%i\n", CHAR_MAX);
	printf("char������СֵΪ��%i\n", CHAR_MIN);

	printf("short�������ֵΪ��%i\n", SHRT_MAX);
	printf("short������СֵΪ��%i\n", SHRT_MIN);

	printf("int�������ֵΪ��%i\n", INT_MAX);
	printf("int������СֵΪ��%i\n", INT_MIN);

	printf("long�������ֵΪ��%li\n", LONG_MAX);
	printf("long������СֵΪ��%li\n", LONG_MIN);

	printf("long long�������ֵΪ��%lli\n", LLONG_MAX);
	printf("long long������СֵΪ��%lli\n", LLONG_MIN);

	printf("unsigned char�������ֵΪ��%u\n", UCHAR_MAX);

	printf("unsigned short�������ֵΪ��%u\n", USHRT_MAX);

	printf("unsigned int�������ֵΪ��%u\n", UINT_MAX);

	printf("unsigned long�������ֵΪ��%lu\n", ULONG_MAX);

	printf("unsigned long long�������ֵΪ��%llu\n", ULLONG_MAX);

	printf("float�����ܱ�ʾ�����ֵΪ��%e\n", FLT_MAX);
	printf("float�����ܱ�ʾ����СֵΪ��%e\n", FLT_MIN);

	printf("double�����ܱ�ʾ�����ֵΪ��%e\n", DBL_MAX);
	printf("double�����ܱ�ʾ����СֵΪ��%e\n", DBL_MIN);

	return 0;
}