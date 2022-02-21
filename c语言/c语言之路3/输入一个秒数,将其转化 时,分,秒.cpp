//输入一个秒数,将其转化 时,分,秒
#include<stdio.h>
int main()
{//3700 1hour 1min 40second
	long int i;
	int second,minute,hour;
    scanf("%d",&i);
    //hour = i / 3600;
    //minute = (i - hour*3600)/60;
    //second = (i - hour*3600)%60;
    hour = i/60/60;
    minute = i/60%60;
    second = i%60;
    printf("Hour = %d\n",hour);
    printf("Minute = %d\n",minute);
    printf("Second = %d\n",second);
	return 0;
 } 
