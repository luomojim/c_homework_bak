#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 65535;		//向内存申请4字节，存储1010
	&a;				//取标识符a在内存中的地址
	//	0000	0000	0000	0000	1111	1111	1111	1111
	//	0		0		0		0		f		f		f		f
	//	0x0000ffff
	
	printf("%p\n", &a);//%p打印地址

	int*p = &a;//这时候的p就是指针变量,*表示p是指针变量，int说明指向对象是int类型
	*p = 20;//解引用操作符， 通过p存放的地址找到*p指向的对象，就是按图索骥
	printf("%d\n", a);
	printf("%d\n", sizeof(char*));//指针变量用4或8字节存放，取决于编译器是x86 && x64


	char ch = 'w';
	char* pc = &ch;//变量是什么类型一般来说不用显式转换就继续用同样的类型
	printf("%p\n", pc);//pc不加&，此时pc就是指针的地址？



	return 0;
}