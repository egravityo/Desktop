//输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
//输入格式：hour:minute k(如hour或minute的值为1，输入为1，而不是01)
//输入：0:0 100  输出：01:40 
#include<stdio.h>
int main()
{
	int hour=0,minute=0,k;
	int a,b;
	printf("请入现在的时间(hour：minute)和要睡的时长(k)：");
	scanf("%d:%d %d",&hour,&minute,&k);
	a = k % 60;	
	b = k / 60;
	minute += a; 
	if(minute>=60)
    {
    	minute%=60;
    	hour++;
	}
	hour+=b;
	printf("%02d:%02d",hour,minute);
	return 0;
}
