/*作业2：定义一个函数，如果数字d在整数n的某位出现，则返回1，否则返回0*/
#include<stdio.h>
int Seek(int x,int y)//Seek表示寻找函数,x为数字,n为整数 
{ 
    int f; 
	for(;y>0;y=y/10)
	{
		f=1; 
		if(x==y%10) 
		{
			printf("1");
		}
		else if 
		f=0;
	
    }
    if(f==1)
    printf("1");
    else
    printf("0");
}
int main()
{
	int i,k;
	int s; //最后输出结果 
	printf("请输入一个数字：");
    scanf("%d",&i); 
    printf("请输入一个整数：");
    scanf("%d",&k); 
    s=Seek(i,k);
	printf("",s);
	return 0; 
 } 
