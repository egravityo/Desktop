//	s 
#include<stdio.h>
int main()
{
	char arr[]="dksflknsa";
	char arr1[20];
	char *pa,*pb;
	pa = arr;
	pb = arr1;
	for(;*pa!='\0';pa++,pb++)
	{
		*pb = * pa;
	}
	*pb = '\0';
	printf("%s\n",arr);
	printf("%s",arr1); 
	return 0; 
 } 
