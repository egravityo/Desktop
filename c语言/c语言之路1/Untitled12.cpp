#include<stdio.h>
int main()
{
	printf("long long占用%zd个字节大小。\n",sizeof(long long));
	printf("long double占用%zd个字节大小。\n",sizeof(long double));
	return 0; 
}
