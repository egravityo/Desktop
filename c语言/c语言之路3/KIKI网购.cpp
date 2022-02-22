/*KIKI非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，
如果今天是"双11"，则这件衣服打7折;如果是是"双12",则这件衣服
打8折,如果有优惠券可以额外减50元(优惠券只能在双11或双12使用)
求KIKI最终所花的钱数
输入 原价 月份 日期 有无优惠券(1代表有,0代表无) 
例：1000.0 11 11 1
输出: 650.00  */
#include<stdio.h>
int main()
{
    int Month,Day,i;
    float Price,Money; 
    scanf("%f %d %d %d",&Price,&Month,&Day,&i);
    // printf("%.2f %d %d %d",Price,Month,Day,i); 
    if(i==1)
    {
    	
    	if(Month==11&&Day==11)
    	{
           Money = Price*0.7 - 50.0; 
           printf("Money = %.2f",Money); 
		}
		else
		{
		   Money = Price*0.8 - 50.0; 
           printf("Money = %.2f",Money);
		}
	}
	else
	{
		printf("Money = %.2f",Money);
	}
	return 0;
 } 
