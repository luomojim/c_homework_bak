#define _CRT_SECURE_NO_WARNINGS
//学校和 yyy 的家之间的距离为 s 米，而 yyy 以 v 米每分钟的速度匀速走向学校。

//在上学的路上，yyy 还要额外花费 10 分钟的时间进行垃圾分类。

//学校要求必须在上午 8:00 到达，请计算在不迟到的前提下，yyy 最晚能什么时候出门。

//由于路途遥远，yyy 可能不得不提前一点出发，但是提前的时间不会超过一天。
#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int s = 0;
	unsigned int v = 0;
	unsigned int t = 0;
	unsigned int min = 0;
	unsigned int hr = 0;
	scanf("%u %u", &s, &v);

	t = ceil((float)s / (float)v) + 10;
	if (t > 480)
	{
		hr = 31 - (t / 60);	
	}
	else if (t == 480)
	{
		printf("24:00");
		return 0;
	}
	else
	{
		hr = 7 - (t / 60);
	}

	min = 60 - t % 60;	
	if (min == 60)
	{
		min = 0;
		hr++;
	}

	if (hr / 10 == 0)	
	{
		printf("0%d:", hr);
	}
	else
	{
		printf("%d:", hr);
	}
	if (min / 10 == 0)
	{
		
		printf("0%d", min);
	}
	else
	{
		
		printf("%d", min);
	}


	return 0;
}