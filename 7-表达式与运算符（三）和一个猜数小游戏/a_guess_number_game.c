/*һ������̨������Ϸ����Ҳ²������*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int rand_number = 0;  // ������ɵ�����
	int input_number = 0; // �û����������
	int count = 0;        // �����²����
	int flag = 1;         // ��������whileѭ��

	// ���������(α�����)
	srand((unsigned)time(NULL));
	rand_number = rand();

	// printf("%d\n", rand_number);

	printf("һ���򵥵Ĳ��������Ϸ\n");
	printf("�����ߣ���������\n");

	while (flag)
	{
		// ��ȡ�û�����
		printf("������һ��0��%d�����֣�",RAND_MAX);
		scanf("%d", &input_number);

		count++;

		if (input_number == rand_number)
		{
			printf("�¶��ˣ���һ������%d�Σ�\n", count);
			flag = 0;
		}
		else if (input_number < rand_number)
		{
			printf("��С��.\n");
		}
		else
		{
			printf("�´���.\n");
		}
	}
	
	// �ó�����ͣһ��
	system("PAUSE");
	return 0;
}