#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����ؼ���typedef �� static

typedef unsigned int uint;//typedef���¶���


void test()
{
	static int a = 1;		//static�ӳ���������������,ջ��--->��̬��
	a++;
	printf("%d ", a);
}




//int main(void)
//{
//	unsigned int a = 0;//�����ޱ�ʶ��int����,��������������ض���
//	uint b = 0;
//	//���ߵȼ�
//	
//	//static,�������α���&����
//	
//	extern int Add(int x, int y);
//
//	int c = 10;
//	int d = 20;
//	printf("%d\n", Add(c, d));//�����ⲿ�ĺ�����Ҫ����
//
//
//
//
//
//
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	extern int val;		//extern���������ⲿ�ķ���
//
//	printf("\n%d", val);
//
//	//register--->�Ĵ��������Դ洢�豸��Ӳ�̣��ڴ棬����(cache),�Ĵ���(������cpu��)
//	//�Ĵ�������
//	register int fast_val1 = 3;//����Ѹñ����ŵ��Ĵ�����,ԭ���ϱ����������аѱ����Ž��Ĵ������棨�ռ�����Ļ���
//
//	
//
//
//	return 0;
//
//}