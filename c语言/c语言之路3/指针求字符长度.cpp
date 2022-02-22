#include<stdio.h>
int Qiu(char* pa)
{
	char*  a = pa;
	char*  b = pa;
	while(*b!='\0')
	{
		b++;
	}
	return b-a;
}
int main()
{
	char arr[]="sdsamas";
	int ret = Qiu(arr);
	printf("%d\n",ret);
	return 0;
 } 
