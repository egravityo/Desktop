//将输入的三个数从小到大排列 
#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("请输入3个数字：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	   t=a;
	   a=b;
	   b=t; 
	 } 
	if(a>c)
	{
		t=a;
		a=c;
		c=t; 
	 } 
	 if(b>c) 
	 {
	 	t=b;
	    b=c;
		c=t; 
	  } 
	  printf("将数字进行从大到小排列之后：%d,%d,%d\n",c,b,a);
	  return 0; 
}
