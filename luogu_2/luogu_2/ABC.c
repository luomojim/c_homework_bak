#define _CRT_SECURE_NO_WARNINGS
//���������ֱ�Ϊ A, B, C�����������ֲ��ᰴ��������˳����㣬������ʼ������������A < B < C��Ϊ�˿��������Ӽ�����ˣ�
//	����ϣ������԰��ո�����˳�������������ǡ�
//
//	�����ʽ
//	��һ�а������������� A, B, C����һ���ǰ����˳�����������ֶ�С�ڻ���� 100��
//	�ڶ��а���������д��ĸ A��B �� C������֮��û�пո񣩱�ʾ�����˳��
//
//	�����ʽ
//	��һ������� A��B �� C����һ�� ���ո񣩸�����

#include <stdio.h>
#include <math.h>


int ABC()
{
	int input[5] = { 0 };
	char letter[5] = { 0 };
	int out[5] = { 0 };
	int temp = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &input[i]);		//����abc
	}
	scanf("%s", letter);		//��ӡ˳��
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (input[j] > input[j + 1])
			{
				temp = input[j + 1];
				input[j + 1] = input[j];
				input[j] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (letter[i] == 'A')
		{
			out[i] = 0;
		}
		if (letter[i] == 'B')
		{
			out[i] = 1;
		}
		if (letter[i] == 'C')
		{
			out[i] = 2;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d ",input[out[i]]);
	}
	
	return 0;
}