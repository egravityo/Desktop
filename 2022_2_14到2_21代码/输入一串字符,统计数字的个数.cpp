//����һ���ַ�,ͳ�����ֵĸ���
#include<stdio.h> 
#include<string.h>
#include<malloc.h>
int fun(char* s,int arr[])
{
    int n=0;
	while(*s!='\0')
	{
	    //������������
		while(*s>'9'||*s<'0')
		{
			s++;
		} 
		//������
		int d=0;
		while(*s<='9'&&*s>='0')
		{
			d=d*10+(*s-'0');
			s++;
    	}
        arr[n]=d;
        n++;
	}
	return n;
}
int main()
{
	char* s;
    printf("������һ���ַ���\n");
    s=(char*)malloc(100);
    gets(s);
    int n=0;
    int arr[20];
    n=fun(s,arr);  
    int i=0;
    printf("һ����%d��",n);
    if(n>0)
    {
    	printf("�����ǣ�\n");
    	for(i=0;i<n;i++)
    	{
    		printf("%d ",arr[i]);
		}
	}
	free(s);
	return 0;
}
