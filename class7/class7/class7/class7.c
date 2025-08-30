#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//两个关键词typedef 和 static

typedef unsigned int uint;//typedef来新定义


void test()
{
	static int a = 1;		//static延长变量的生命周期,栈区--->静态区
	a++;
	printf("%d ", a);
}




//int main(void)
//{
//	unsigned int a = 0;//声明无标识的int变量,还可以是下面的重定义
//	uint b = 0;
//	//两者等价
//	
//	//static,用来修饰变量&函数
//	
//	extern int Add(int x, int y);
//
//	int c = 10;
//	int d = 20;
//	printf("%d\n", Add(c, d));//调用外部的函数，要声明
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
//	extern int val;		//extern声明来自外部的符号
//
//	printf("\n%d", val);
//
//	//register--->寄存器，电脑存储设备有硬盘，内存，缓存(cache),寄存器(集成在cpu上)
//	//寄存器变量
//	register int fast_val1 = 3;//建议把该变量放到寄存器中,原则上编译器会自行把变量放进寄存器里面（空间允许的话）
//
//	
//
//
//	return 0;
//
//}