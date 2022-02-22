#include<stdio.h>
int main()
{

  int a,b,c,max;
	  printf("请输入三个实数：\n");
	  scanf("%d%d%d",&a,&b,&c);
	  if(a>b)
	  {
		  b=a;
	  }
	  if(c>b)
	  {
		  b=c;
	  }
	  if(a>c)
	  {
		  b=a; 
      }		
	  printf("max=%d",b); 
}
