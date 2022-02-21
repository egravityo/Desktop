/*例题14：将一个正整数分解质因数。例如：输入90，
打印出 90=2*3*3*5*/
#include<stdio.h>
int main()
{
	int i;
	int k; 
	printf("请输入一个正整数：\n");
	scanf("%d",&i);
    for(k=2;k<=i;k++)
	{
		if(i==k)
		{
			printf("%d\n",i);
		}
		else 
		{
			i=i/k;
			printf("%d\n",k);
		}
	 } 
	return 0; 
 } 
