//用函数将已知的一个数组复制到另一个数组中
#include<stdio.h>
void Copy(char* pa,char* pb)
{
	for(;*pa!='\0';pa++,pb++)
	{
		*pb = *pa;
	}
	*pb = '\0';
 } 
int main()
{
    char arr[] = "hei boy!";
    char arr1[20];
    Copy(arr,arr1);
    printf("arr = %s\n",arr);
    printf("arr1 = %s\n",arr1);
	return 0; 
 } 
