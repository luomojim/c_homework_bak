#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score = 0;
	printf("请输入你的成绩(int32)\n");
	scanf("%d", &score);
	printf("你的分数是%d,按下任意键继续\n", score);
	getchar();
	while (score > 750 || score <= 0)
	{
		printf("你觉得有可能是这个分数吗?\n");
		printf("请重新输入你的成绩(int32)\n");
		scanf("%d", &score);
		printf("你的分数是%d,按下任意键继续\n", score);
		getchar();
	}		
		
		if (score <= 653)
			{
				printf("滚去读樵高\n");
			}
		else
	
			printf("不赖，去海中吧\n");
	
	printf("按下任意按键关掉软件");
	getchar();
	return 0;

}