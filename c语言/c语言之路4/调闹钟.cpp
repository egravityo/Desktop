//调闹钟,输入现在的时刻和想睡的时间
//例：输入：  20：30  100
//输出：22：10 
#include<stdio.h>
int main()
{
	int h,m,k;
	scanf("%d:%d %d",&h,&m,&k);
	h = ((m+k)/60+h)%24;
    m = (m+k)%60;
    printf("%02d:%02d",h,m);
	return 0;
}
