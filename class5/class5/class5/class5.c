#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ʹ���Զ���ĺ��������������ĺ�
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main(void)
{
	int a = 0;
	int b = 0;
	printf("����������a������b(�м��ÿո����)\n");
	scanf("%d %d",&a,&b);
	
	int ret = scanf("%d %d", &a, &b);
	if (ret != 2) 
	{
		printf("�����������������������\n");
		return 1;  // �쳣�˳�
	}


	int sum = Add(a,b);
	printf("�����%d\n", sum);
	getchar();

	return 0;
}