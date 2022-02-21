#include<stdio.h>
	int main(void)
	{  
	  int x,a,b,c,d;
	  /*********Begin*********/
      scanf("%4d",&x);
	  a = x/1000;
	  b = x/100%10;
	  c = x/10%10;
	  d = x%10;
	  printf("ÄæĞòÊıÎª%d%d%d%d",d,c,b,a);
	  /*********End**********/ 
       return 0;
	}
