/*����һ���ַ�����������������������Ϊһ������,���δ��������
a��,ͳ�ƹ��ж��ٸ���������������Щ����(�ַ�ָ��)   
#include<stdio.h>
#include<stdlib.h>
int cal(char* p,int a[])
{
	int i;
	int d;
	int count=0;
	while(*p!='\0')
	{
		while(*p<'0'||*p>'9')
		{
			p++;
		}
		d=0;
		i=0;
		while(*p>='0'&&*p<='9')
		{
	        d=d*10+(*p-'0');
			p++;
		}
	    a[count]=d;
	    count++;
    }
		return count;
}
int main()
{  
    char* arr;
    arr=(char * )malloc(100);
	gets(arr);
	int a[10];
	int len=cal(arr,a);
    printf("һ����%d��\n",len);
	int i=0;
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	 } 
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int fun(char* p,int a[])
{
	int count=0;
	int d;
	while(*p!='\0')
	{
		while(*p<'0'||*p>'9')
		{
			p++;
		}
		d=0;
		while(*p>='0'&&*p<='9')
		{
			d=10*d+(*p-'0');
			p++;
		}
		a[count]=d;
		count++;
	}
	return count;
}
int main()
{
    char *arr;
    arr=(char *)malloc(100); 
    gets(arr); 
    int a[20];
    int count = fun(arr,a);
    int i=0;
    printf("һ����%d��",count);
    for(;i<count;i++)
    {
    	printf("%d ",a[i]);
	}
	return 0;
 } 
