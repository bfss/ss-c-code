/*�����������ĺ�*/
#include <stdio.h>

int value1, value2, value3;

int compute(int x, int y);

int main(void)
{
	// �Ӽ��̻�ȡ��һ������
	printf("������һ��С��50�����֣�"); // �Ӽ��̻�ȡ��һ������
	scanf_s("%d", &value1);

	// �Ӽ��̻�ȡ�ڶ�������
	printf("��������һ��С��50�����֣�");
	scanf("%d", &value2);

	// �����������ĺͲ��ڿ���̨���
	value3 = compute(value1, value2);
	printf("%d + %d = %d\n", value1, value2, value3);

	return 0;
}

// ����������֮�͵ĺ���
int compute(int x, int y)
{
	return (x + y);
}