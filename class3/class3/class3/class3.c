#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*printf("test");//%d��ӡ������%c��ӡ�ַ���%s��ӡ�ַ���,%f��ӡfloat��%lf��ӡdouble float
	//����c����������ĸ�ʣ�??(�ᱻ��ӡ�ɱ��[
	//ת�����ʹ��
	printf("now ' is being printing %c\n",'\'');
	printf("now \" is being printing %s\n","\"");//equally
	printf("type \\ to make it only mean \"\\\", and now it is %s\n","\\");
	//for example if you want to explain \

	printf("C:\\test\\test.c");//use \\ to prevent \t */
	printf("\a\a\a\a\a\a");
	//ˮƽ�Ʊ������TAB
	
	//ʹ��\ddd��ʾ�˽��Ƶ�ASCII����

	printf("%c\n", '\130');//ʵ���ϱ�ʾ���ǰ˽��Ƶ�130������ASCII��������X
	
	printf("%d\n", strlen("c:\test\628\test.c") );//������14
	
	
	
	
	
	
	
	
	
	
	
	printf("�������ⰴ���ɵ��������");
	getchar();
	return 0;
}