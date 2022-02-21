//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出
#include<stdio.h>
//odd 奇数  even 偶数 
int main()
{
	int n=0;
    int even = 0; 
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			even++;
	    }
	} 
	printf("偶数一共有%d个\n",even);
	printf("奇数一共有%d个\n",n-even);
	return 0;
}
