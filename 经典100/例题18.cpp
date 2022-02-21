/*求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
例如2+22+222+2222+22222(此时共有5个数相加)，
几个数相加有键盘控制*/
#include<stdio.h>
int main()
{
	int i,sum=0; 
	int a,z; 
	int t=0;
	printf("请输入a的值：\n"); 
	scanf("%d",&a); 
	printf("请输入需要相加的个数：\n");
	scanf("%d",&z);
	for(i=1;i<=z;i++)
	{
		t=t+a;
	    sum+=t;
	    a=a*10;
	} 
	printf("\n");
	printf("sum=%d",sum);
	 
	return 0; 
 } 
