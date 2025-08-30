#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//标准的主函数

int global_var1 = 114514;
int main(void)		//main函数是程序的入口 //main函数有且只有一个


{
	/*printf("Hello World!\n");
	int num1 = 20;//初始化局部变量
	int num2 = 15;
	printf("int_num1 is %d , and int_num2 is %d\n",num1,num2);

	scanf("%d %d", &num1, &num2);//&的作用是取地址

	int sum = num1 + num2;
	printf("the sum of num1+ num2 is %d \n", sum);
	
	printf("%d \n", global_var1);
	*/
	
	extern int a;//声明来自其他外部的变量
	
	{
		
		printf("a= %d \n",a);



	}
	
	return 0;


}
