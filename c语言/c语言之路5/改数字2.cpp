/*  改数字,各位如果是奇数,则改为1,是偶数,改为0
例：输入 231 输出 11
输入 923 输出101 */
#include<stdio.h>
#include<math.h> 
int main()
{ 
    int n,i=0; 
	int sum=0;
	scanf("%d",&n);
	while(n)
    {
    	int m = n % 10;
    	if(m%2==0)
    	{
    		m = 0;
		}
		else
		{
			m = 1;
		} 
		sum+=m*pow(10,i); 
		i++;
		n/=10; 
	}   
	printf("%d",sum);
	return 0;
 } 
