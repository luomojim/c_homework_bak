#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//����Ķ��壺һ����ͬ���͵�Ԫ�صļ���
	int arr[] = { 1,2,3,4,5,6,12,34 };
	//�����ȡ��
	printf("�ڰ˸�����%d\n", arr[7]);
	printf("���δ�ӡ��������ȫ������\n");
	int sum = 0;
	while (sum < 8)
	{
		printf("%d\n", arr[sum]);
		sum = sum++;
	}

	int i = 0;
	printf("��forѭ��\n");
	for (i = 0; i < 8; i++)
	{
		printf("%d\n", arr[i]);
	
	}
	getchar();
	return 0;   

	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 2, a = b + c, c - 3);//10-2=8��	
	printf("%d\n", d);
	//scanf("%d %d", &a, &b);
	//printf("\n�����%d��", a < b?b:a);


	//�ؼ��֣�c�����Դ���ר�����ʣ�������Ϊ����
	return 0;
}