#define _CRT_SECURE_NO_WARNINGS

//伦敦奥运会要到了，小鱼在拼命练习游泳准备参加游泳比赛，可怜的小鱼并不知道鱼类是不能参加人类的奥运会的。

//这一天，小鱼给自己的游泳时间做了精确的计时（本题中的计时都按24小时制计算），
//它发现自己从 a 时 b 分一直游泳到当天的 c 时 d 分，请你帮小鱼计算一下，它这天一共游了多少时间呢？

//一行内输入四个整数，以空格隔开，分别表示题目中的 a, b, c, d。
//一行内输出两个整数 e 和 f，用空格间隔，依次表示小鱼这天一共游了多少小时多少分钟。其中表示分钟的整数 f 应该小于 60。

#include <stdio.h>
int swimming()
{
	int hr = 0;
	int min = 0;
	int hr_l = 0;
	int min_l = 0;
	scanf("%d %d %d %d", &hr, &min,&hr_l,&min_l);
	int temp_min = hr * 60 + min;
	int temp_min_l = hr_l * 60 + min_l;
	int ret = temp_min_l - temp_min;
	hr = (ret / 60);
	min = ret % 60 ;
	if (min >= 60)
	{
		min = min - 60;
		hr++;
	}
	printf("%d %d", hr, min);
	return 0;
}