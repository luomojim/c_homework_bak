//define����,�������Ǹ���Ŀ�ڣ�
#define _CRT_SECURE_NO_WARNINGS
#define NUM 100						//�����ʶ������num = 100;
#define ADD(x,y) ((x)+(y))				//�����



#include <stdio.h>

int val = 2025;					//ȫ�ֱ��������ⲿ��������
static int val_1 = 2026;		//ʹ�þ�̬ȫ�ֱ����ⲿ��������--->�ڲ��������ԣ�ֱ�ӵı仯����������Χ��С

int Add(int x, int y)			//����һ�������ⲿ�������ԣ��ⲿҪʹ���Զ��庯��Ҳ��Ҫ����,staticһ��������С������--->��̬����
{
	return (x + y);
}

int main()
{
	int a = 10;
	int b = 20;

	printf("%d\n", ADD(a, b));
	return 0;
}