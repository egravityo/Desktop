#include<stdio.h>
	int main(void)
	{  
		float x,y;
		scanf("%f",&x);
	  /*********Begin*********/
	    if(x<0&&x!=-3)
		{
		   y=x*x+x-6;
		   printf("%.3f",y);
		}
	    if((x>=0&&x<10)&&(x!=2&&x!=3)) 
		{
			y=x*x-5*x+6.0; 
	 	    printf("%.3f",y);
		}
        else
	 {
	 	y=x*x-x-1;
		printf("%.3f",y);  
	  }
	  /*********End**********/ 
       return 0;
	}
 
