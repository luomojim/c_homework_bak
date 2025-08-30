#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*printf("test");//%d打印整数，%c打印字符，%s打印字符串,%f打印float，%lf打印double float
	//早期c语言有三字母词，??(会被打印成别的[
	//转义符的使用
	printf("now ' is being printing %c\n",'\'');
	printf("now \" is being printing %s\n","\"");//equally
	printf("type \\ to make it only mean \"\\\", and now it is %s\n","\\");
	//for example if you want to explain \

	printf("C:\\test\\test.c");//use \\ to prevent \t */
	printf("\a\a\a\a\a\a");
	//水平制表符就是TAB
	
	//使用\ddd表示八进制的ASCII编码

	printf("%c\n", '\130');//实际上表示的是八进制的130，就是ASCII码表里面的X
	
	printf("%d\n", strlen("c:\test\628\test.c") );//输出结果14
	
	
	
	
	
	
	
	
	
	
	
	printf("按下任意按键干掉这个窗口");
	getchar();
	return 0;
}