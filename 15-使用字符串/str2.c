#include <stdio.h>
#include <stdlib.h>

int main()
{
	// malloc()��ʾ
	printf("����ǰ10����д��ĸ\n");  
	char *message,*ptr;
	// ����ռ��СΪҪ�洢��Ԫ�ظ���*ÿ��Ԫ�ش�С,��Ҫ�洢���ַ�������ʵ�ʴ�СҪ+1
	// ��ȡ����ʱһ��ҪԤ�ȷ���洢�ռ䣬Ҳ����ʹ���ַ�����
	message = (char *)malloc(11 * sizeof(char));      
	if (message == NULL)
	{
		printf("�ռ䲻����~\n");
		return 1;
	}
	// messageʼ��ָ���ַ�����ͷ�����ܸı䣬������p����ֵ
	ptr = message;
	printf("��ô��ʼ���ɿ�~\n");
	for (int i = 65; i < 75; i++)
	{
		*ptr = i;
		*ptr++;
	}
	// ���Ҫ�п��ַ�
	*ptr = '\0';

	// �����ʾ
	puts(message);
	printf("%s\n", message);

	// ���Ҫ�ͷ�malloc()�������Դ����Լ�ڴ�
	free(message);

	// ������ʾ����
	char *m,*m2;
	// ����ռ�
	m=(char *)malloc(11 * sizeof(char));
	if (m == NULL)
	{
		printf("�ռ䲻����~");
		return 1;
	}
	// ʹ��gets()
	printf("����һ��С�ڵ���10���ַ����ַ���");
	gets(m);
	puts(m);
	// ʹ��gets()����ֵ
	printf("����һ��\n");
	m2 = gets(m);
	puts(m);
	puts(m2);
	// ʹ��scanf()
	printf("������ʽ������\n");
	scanf("%s", m);
	puts(m);
	// ʹ��scanf()
	printf("��������һ��~,�������\n");
	scanf("%3s", m);
	printf("%s\n", m);
	// ��Ҫ�����ͷ��ڴ�
	free(m);
	return 0;
}