//unsiged
#include<stdio.h>
#include<windows.h>
int main()
{
	unsigned char i;
	for(i=9;i>=0;i--)
	{
		printf("%u\n",i);
		Sleep(1);
	}
	return 0;
}
