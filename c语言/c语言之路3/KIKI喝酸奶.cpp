//KIKI喝酸奶，一箱酸奶里有n盒酸奶，KIKI每h分钟能喝光一瓶酸奶，
//并且KIKI在喝光一盒酸奶之前不会喝另外一瓶,那么经过m分钟后还
//剩多少瓶未打开的酸奶
#include<stdio.h>
int main()
{
	//5 10 10 4
	//5 10 20 3
	//5 10 21 2
	//8  5 16 4
	int n,h,m;
	scanf("%d %d %d",&n,&h,&m);
	int count = 0;
	if(m%h)
	{
		count = n - (m/h)-1;
		printf("%d\n",count);		
	 } 
	else
	{
	    count = n - (m/h);
	    printf("%d\n",count);
	 }  
	return 0;
 } 
