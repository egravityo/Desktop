//书上例题连接俩字符串 
#include<stdio.h>
int main()
{
	char arr1[60],arr2[30];
	gets(arr1);
    gets(arr2);
    int i=0;
    int j=0;
    while(arr1[i]!='\0')
    {
    	i++;
	}
	while(arr2[j]!='\0')
	{
		arr1[i]=arr2[j];
		i++;
		j++;
	}
	arr1[i]='\0';
	puts(arr1);
    return 0;
} 
