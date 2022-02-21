/*求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
例如2+22+222+2222+22222(此时共有5个数相加)，
几个数相加有键盘控制*/
#include<stdio.h>
int main()
{
	int k; 
	int a,z; 
	k=a;
	int sum=0;//假设（2，5)  
	printf("请输入俩个数字(a z)：");
	scanf("%d %d",&a,&z);
    while(z>0)
    {
    	sum+=k;
    	a=a*10;
    	k+=a; 
    	z--;
	}
	printf("sum=%d",sum); 
	return 0;
 } 
