#include <stdio.h>

int value1, value2, value3;

/* ����ԭ��
 * ��������:compute
 * �����б�:int x, int y
 * ����ֵ����:int
 */
int compute(int x, int y);
int compute2(int x);

int main(void)
{
	
	printf("������һ��С��50�����֣�"); 
	scanf_s("%d", &value1);

	
	printf("��������һ��С��50�����֣�");
	scanf("%d", &value2);

	// �������ã����������value1,value2,����int��ֵ��value3
	value3 = compute(value1, value2);
	printf("%d + %d = %d\n", value1, value2, value3);

	int value4 = 0;
	value4 = compute2(value2);
	printf("%d\n", value4);

	return 0;
}

// �������壬�뺯��ԭ����ͬ�����ǰ���������
// ��һ�н�������ͷ���뺯��ԭ����ͬ������û�зֺ�
int compute(int x, int y)
// �����壬�ô��������𣬺���������ʱִ��
{
	int a = 0;
	// ����ֵ��return��ʾ��������
	return (x + y);
}

int compute2(int x)
{
	if (x > 2)
	{
		return x;
	}
	else
	{
		return -1;
	}

}