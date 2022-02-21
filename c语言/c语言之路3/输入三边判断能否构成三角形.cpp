//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，
//判断三角形的类型（等边三角形、等腰三角形或普通三角形）,多组输入 
#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
	    if((a+b>c)&&(a+c>b)&&(b+c>a))
	    {
	    	if(a==b&&b==c)
	    	{
	    		printf("等边三角形"); 
			}
			else if(a==b||b==c||a==c) 
			{
				printf("等腰三角形");
			}
			else
			{
				printf("普通三角形");
			 } 
		}
		else
		{
			printf("不构成三角形！");
		}
    }
	return 0;
}
