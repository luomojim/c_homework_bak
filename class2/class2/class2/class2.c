#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	/*
	1 2 3;
	3.14
	'w'
	"ww"
	���϶��ǳ��������ɱ仯���� 
	

	#define constant 233	//���峣���ĵ�һ�ַ���
	printf("%d \n", constant);

	const int a = 23;		//���峣���ĵڶ��ַ���
	printf("%d \n", a);

	3.14;					//���泣��

	enum Color				//ö�ٳ���
	{
		RED,
		GREEN,
		BLUE,

	};

	enum Color c = RED;
	printf("the color c is %d \n ", c);
*/

	char ch = 'h';			//�����ŵ����ַ�
	char arr1[13] = "Hello World!";//�������Ÿ�����ַ�����ַ������ո����Ҳ����
	char arr2[] = { 'a','b','c','d' };//û�з�\0�ضϵĺ��
	char arr3[] = { 'a','b','c','d','\0'};//�����ض�
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