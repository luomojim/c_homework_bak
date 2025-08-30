#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//数组的定义：一组相同类型的元素的集合
	int arr[] = { 1,2,3,4,5,6,12,34 };
	//数组的取用
	printf("第八个项是%d\n", arr[7]);
	printf("依次打印数字里面全部数字\n");
	int sum = 0;
	while (sum < 8)
	{
		printf("%d\n", arr[sum]);
		sum = sum++;
	}

	int i = 0;
	printf("用for循环\n");
	for (i = 0; i < 8; i++)
	{
		printf("%d\n", arr[i]);
	
	}
	getchar();
	return 0;   

	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 2, a = b + c, c - 3);//10-2=8，	
	printf("%d\n", d);
	//scanf("%d %d", &a, &b);
	//printf("\n这个数%d大", a < b?b:a);


	//关键字：c语言自带的专有名词，不能作为变量
	return 0;
}