#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	/*
	1 2 3;
	3.14
	'w'
	"ww"
	以上都是常量，不可变化的量 
	

	#define constant 233	//定义常量的第一种方法
	printf("%d \n", constant);

	const int a = 23;		//定义常量的第二种方法
	printf("%d \n", a);

	3.14;					//字面常量

	enum Color				//枚举常量
	{
		RED,
		GREEN,
		BLUE,

	};

	enum Color c = RED;
	printf("the color c is %d \n ", c);
*/

	char ch = 'h';			//单引号的是字符
	char arr1[13] = "Hello World!";//用数组存放更多的字符组成字符串，空格符号也算数
	char arr2[] = { 'a','b','c','d' };//没有放\0截断的后果
	char arr3[] = { 'a','b','c','d','\0'};//主动截断
	printf("%s \n", arr1);
	printf("%s \n", arr2);
	printf("%s \n", arr3);

	int length1 = strlen(arr1);
	int length2 = strlen(arr2);
	int length3 = strlen(arr3);
	printf("the length of the string_arr1 is %d \n", length1);
	printf("the length of the string_arr2 is %d \n", length2);
	printf("the length of the string_arr3 is %d \n", length3);
	return 0;




}