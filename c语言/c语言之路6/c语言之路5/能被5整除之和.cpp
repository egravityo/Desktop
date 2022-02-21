//输入包含多个样例，每个样例一个正整数n，占一行。读取到文件结尾。输入的n不超过100 
//对于每个样例n，输出n以内（包含n）所有能被5整除的正整数的乘积。
//输入：19
//输出：750
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
    int i;
    int sum=1;
    for(i=1;i<=n;i++)
    {
       if(i%5==0)
       {
    	  sum*=i;
	   }
	}
    printf("SUM=%d\n",sum);
	return 0;
 } 

