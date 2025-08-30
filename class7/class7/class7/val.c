//define定义,作用域是该项目内？
#define _CRT_SECURE_NO_WARNINGS
#define NUM 100						//定义标识符常量num = 100;
#define ADD(x,y) ((x)+(y))				//定义宏



#include <stdio.h>

int val = 2025;					//全局变量具有外部链接属性
static int val_1 = 2026;		//使用静态全局变量外部链接属性--->内部链接属性，直接的变化就是作用域范围减小

int Add(int x, int y)			//函数一样具有外部链接属性，外部要使用自定义函数也需要声明,static一样可以缩小作用域--->静态函数
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