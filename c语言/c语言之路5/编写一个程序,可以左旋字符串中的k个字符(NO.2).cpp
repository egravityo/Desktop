//��дһ������,���������ַ����е�k���ַ�(NO.2)
#include<stdio.h>
#include<string.h>
void reserve(char* left,char* right)
{
   while(left<right)
   {
      int temp=*left;
	  *left = * right;
	  *right=temp;
	  left++;
	  right--;   	
   } 
}
void fun(char* arr,int k)
{
    int len=strlen(arr);
    if(k<=len)
    {
    	reserve(arr,arr+k-1);//�������k���ַ�
        reserve(arr+k,arr+len-1);//�����ұ�len-k���ַ� 
        reserve(arr,arr+len-1);//����ȫ��
        puts(arr);
	}
	else
	{
		printf("����");
	}
}
int main()  
{   //abcdefg 2
    //ba gfedc
    //cdefgab
	int i,k;
	char arr[100]={0};
	printf("������һ���ַ���");
	gets(arr);
	printf("������һ�����֣�"); 
	scanf("%d",&k);
	fun(arr,k); 
	return 0;
 } 
