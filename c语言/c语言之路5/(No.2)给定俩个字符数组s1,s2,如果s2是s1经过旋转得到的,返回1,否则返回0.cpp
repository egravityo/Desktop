//(No.2)���������ַ�����s1,s2,���s2��s1������ת�õ���,����1,���򷵻�0
#include<stdio.h>
#include<string.h>
int is_left_move(char* s1,char* s2)
{
    //abcdef->abcdefabcdef
    int len1=strlen(s1);
    int len2=strlen(s2); 
    if(len1==len2)
    {
	    strncat(s1,s1,len1);
		//strstr(s1,s2)  �����s2��s1���ִ�,���ص�ַ,���򷵻ؿ�ָ��
		char* ret=strstr(s1,s2);
		if(ret==NULL)
		{
		   return 0;	
		}	
		else
		{
			return 1;
		}			
	}
	else
	{
		return 0;
	}
}
int main()
{
    char arr1[30]="abcdef";
    char arr2[]="bcd";
    int ret = is_left_move(arr1,arr2);
    if(ret==1)
    {
    	printf("Yes��\n");
	}
	else
	{
		printf("NO��\n");
	}
	return 0;
}
