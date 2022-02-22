/*给一个不多于5位的正整数，求它是几位数并且反序打印各位数字*/
#include<stdio.h>
int Jiw(int x) 
{
	int count = 1; 
	while(x%10!=x)
	{
		count++; 
	    x=x/10; 
	 } 
	return count; 
}
int main()
{
	int i; 
	int n; 
    int k;
	printf("请输入一个整数(5位数之内)：");
    scanf("%d",&i);
	int ret = Jiw(i); 
	printf("\n该数是%d位数\n",ret); 
	for(n=1;n<=ret;n++) 
	{//4666
		k = i % 10;
		printf("%d ",k);
		i /= 10; 
	}
	
	return 0;
}
