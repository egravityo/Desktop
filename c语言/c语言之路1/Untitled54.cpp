#include<stdio.h>
int main()
{      
		 int a,b,c;
	    scanf("%d,%d,%d",&a,&b,&c);
		if(a>b>c)
	    printf("c=%d,b=%d,a=%d\n"); 
		if(a>c>b)
		printf("%d,%d,%d\n",b,c,a);
	    if(b>a>c)
		printf("%d,%d,%d\n",c,a,b);
		if(b>c>a)
		printf("%d,%d,%d\n",a,c,b);
		if(c>a>b)
		printf("%d,%d,%d\n",b,a,c);
        if(c>b>a)
		printf("%d,%d,%d\n",a,b,c);
       return 0;
}


