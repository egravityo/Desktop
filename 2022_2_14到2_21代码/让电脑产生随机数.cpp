//让电脑产生随机数
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand((unsigned int)time(NULL)); 
    int x=rand()%3;
    printf("%d",x);
	return 0;
 } 
