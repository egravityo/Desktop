/*一小球从100米高空自由落下,每次落地后又返回跳回原来高度的一半;
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？*/
#include<stdio.h>
int main()
{   /*
	int count=0
	int sum=0;
	for(count=1;count<=10;count++)
	{
		sum=sum+i+2*k;
		i=i/2; 
        k=i/2; 
         
	}	
	
	int i;
	double sum=100,h=sum/2; 
	for(i=2;i<=10;i++)
	{
		sum=sum+2*h;
		h=h/2; 
	 } 
	printf("第10次落地一共经过%lf米\n",sum);
	printf("第10次反弹%lf米\n",h); 
	return 0; 
 } /* 
 思路：第一次落地总路程：100
       第一次反弹：50
	   第二次落地总路程：100+50+50=200
	   第二次反弹：25
	   第三次落地总路程：100+50+50+25+25=250
	   第三次反弹：12.5 */
	int i;
	int z;
	double sum=100,h=sum/2;
	printf("请输入次数(大于等于2)：\n");
	scanf("%d",&z); 
	for(i=2;i<=z;i++)
	{
		sum=sum+2*h;
		h=h/2; 
	 } 
	printf("第%d次落地一共经过%lf米\n",z,sum);
	printf("第%d次反弹%lf米\n",z,h); 
	return 0;
}
