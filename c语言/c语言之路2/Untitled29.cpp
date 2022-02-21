#include<stdio.h>
int main()
{
	float arr[10];
	int i;
    for(i=0;i<10;i++)
    {
    	printf("请输入第%d个成绩：",i+1);
    	scanf("%.2f",&arr[i]);
	}
	return 0;
}
