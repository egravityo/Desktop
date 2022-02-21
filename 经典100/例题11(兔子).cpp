/*经典例题：有一对兔子，从出生后第3个月起每个月
都生一对兔子，小兔子长到第三个月后每个月又生一对
兔子，假如兔子都不死，问每个月的兔子总数是多少？*/
//输出斐波那契数列  
#include<stdio.h>
int main()
{
    int i=1,k=1;
	int month;
	for(month=1;month<=10;month++)
	{
       printf("%d ",i);
       printf("%d ",k);
       i=i+k;
       k=k+i;
	}
	return 0;
}
