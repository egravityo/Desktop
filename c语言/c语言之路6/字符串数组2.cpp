//×Ö·û´®Êý×é
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char (*p)[20];
	char arr[3][20]={{"Hello world"},{"nice to you"},{"good morning"}};
    int i=0;
    p=&arr;
    for(;i<3;i++)
    {
    	printf("%d is %c\n",i+1,*p++);
	}
    return 0;
 } 
