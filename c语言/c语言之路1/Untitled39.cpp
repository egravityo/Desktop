//输入一个数，如果该数大于等于0，则输出它的平方，如果小于0，不做处理 
#include<stdio.h>
#include<math.h> 
int main()
{
     int a,b;
	 printf("请心输入一个实数：\n");
	 scanf("%d",&a);
	 if(a>=0)
	 {   
	     b=a*a; 
	     printf("这个数的平方是：%d\n",b); 
	 } 
	 else
	 {
	 	printf("亲 你输入的不是一个大于等于0的数噢！",a); 
	 }
	 return 0; 
}
