#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��׼��������

int global_var1 = 114514;
int main(void)		//main�����ǳ������� //main��������ֻ��һ��


{
	/*printf("Hello World!\n");
	int num1 = 20;//��ʼ���ֲ�����
	int num2 = 15;
	printf("int_num1 is %d , and int_num2 is %d\n",num1,num2);

	scanf("%d %d", &num1, &num2);//&��������ȡ��ַ

	int sum = num1 + num2;
	printf("the sum of num1+ num2 is %d \n", sum);
	
	printf("%d \n", global_var1);
	*/
	
	extern int a;//�������������ⲿ�ı���
	
	{
		
		printf("a= %d \n",a);



	}
	
	return 0;


}
