//给定俩个字符数组s1,s2,如果s2是s1经过旋转得到的,返回1,否则返回0
#include<stdio.h>
#include<string.h>
/*
void left_move(char* arr,int k,int len)
{
    int i=1;
    for(i=0;i<k;i++)
    {
    	char temp;
    	int j;
    	for(j=0;j<len-1;j++)
    	{
    	    temp=arr[0];
            *(arr+j)=*(arr+j+1);
 		}
        *(arr+len)=temp;
	}
}
*/
void left_move1(char* left,char* right)
{
	while(left<right)
	{
		char temp=*left;
		*left=*right;
		*right=temp;
		left++;
		right--;
	}
}
void left_move2(char* arr,int k,int len)
{
	left_move1(arr,arr+k-1);//逆序左边k个字符 
	left_move1(arr+k,arr+len-1);//逆序右边len-k个字符 
	left_move1(arr,arr+len-1);//逆序全部 
}
int is_left_move(char *s1,char *s2)
{
    int i;
	int len=strlen(s1);
    for(i=0;i<len;i++)
	{
	   left_move2(s1,1,len);
	   int ret=strcmp(s1,s2);	
	   if(ret==0)
	   {
	   	   return 1;
	   }
    }	
    return 0;
} 
int main()
{
	char arr1[]={"abcdef"};
	char arr2[]={"cdefab"};
    int ret = is_left_move(arr1,arr2); 
	if(ret==1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
