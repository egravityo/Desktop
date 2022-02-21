#include<stdio.h>
int main()
/*
{
	double d=2.41;
	double* pd=&d;
	*pd=8.8;
	printf("%lf\n",*pd); 
	printf("%lf\n",d);
	printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(long double*));
	return 0; 
 }*/
 {
 	int  a,b;//作用：判断俩个数的大小，输出最大值;
	int  max; 
 	printf("请输入俩个数字：\n"); 
	scanf("%d %d",&a,&b);
	max=(a>b)?a:b;
	printf("max=%d\n",max); 
 	return 0;
  } 
