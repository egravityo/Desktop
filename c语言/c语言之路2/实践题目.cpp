#include <stdio.h>
int main()
	 { 
       int a=1,b=2,c=3,d=4,m=2,n=2;
       int i = (m=a>b)&&(n=c<d); 
       printf("%d\n",n); 
       return 0;
}	
