
#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  float i;
	  int h;
	  int n;
	  scanf("%d %d",&h,&n);
	  float high=h;
	  int count=0;
	  for(count=1;count<=n;count++)
	  {
		  high/=2;
		  i+= high+h;
	  }
	  printf("%.2f %.2f",high,i);
	  	  
	  
	  /*********End**********/ 
       return 0;
	}
