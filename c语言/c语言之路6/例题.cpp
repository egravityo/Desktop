//
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1000];
    int i;
    for(i=0;i<1000;i++)
    {
    	arr[i]=-1-i;
	}
	printf("%d",strlen(arr));
	return 0;
}
