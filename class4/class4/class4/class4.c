#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score = 0;
	printf("��������ĳɼ�(int32)\n");
	scanf("%d", &score);
	printf("��ķ�����%d,�������������\n", score);
	getchar();
	while (score > 750 || score <= 0)
	{
		printf("������п��������������?\n");
		printf("������������ĳɼ�(int32)\n");
		scanf("%d", &score);
		printf("��ķ�����%d,�������������\n", score);
		getchar();
	}		
		
		if (score <= 653)
			{
				printf("��ȥ���Ը�\n");
			}
		else
	
			printf("������ȥ���а�\n");
	
	printf("�������ⰴ���ص����");
	getchar();
	return 0;

}