//输入一个四位数，使百位数为0；例如1332，结果：1032; 
#include<stdio.h>
int main()
{
	int  x,a,b,c,d;
	printf("请输入一个四位数x：\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a=x/100;
	b=0;
	c=x/10%10;
	d=x/10;
	printf("%d%d%d%d",a,b,c,d);
	return 0; 
}





