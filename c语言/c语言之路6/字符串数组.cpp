//×Ö·û´®Êý×é
#include<stdio.h>
int main()
{ 
    char arr[5][20]={"Hello","j","Bit wang","chen","biao"};
    char (*p)[20];
    int i,j;
    p = arr;
    for(i=0;i<5;i++)
    {
        printf("%d is %s\n",i+1,*p++);
	}
	return 0;
 } 
