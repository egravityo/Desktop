//有5个人坐在一起,他们问第五个人多少岁,第五个人说比第四个人大俩岁
//然后他们又问第四个人，第四个人说比第三个人大俩岁，如此循序渐进，
//第一个人的回答是10岁,求第五个人的年龄(用递归) 
#include<stdio.h>
int Age(int n) 
{
	if(n==1)
	{
	    return 10;	
	}
	else
	return Age(n-1)+2; 
 } 
int main()
{
    int ret = Age(5);
	printf("第5个人%d岁",ret);
	return 0;
}
