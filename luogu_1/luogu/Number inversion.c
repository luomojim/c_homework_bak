#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Êý×Ö·´×ª Number inversion
int Number_inversion()
{
    float input;
    scanf("%f", &input);
    input = input * 10;
    int process_num = (int)input;
    int temp;
    int ret = 0;
    while (process_num % 10 != 0)
    {
        temp = process_num % 10;
        process_num = process_num - temp;
        process_num = process_num / 10;
        ret = ret * 10 + temp;
    }
    printf("%.3f\n", (float)ret / 1000);
    return 0;
}