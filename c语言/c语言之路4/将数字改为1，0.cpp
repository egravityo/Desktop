//С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
//���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0��
#include<stdio.h>
int main()
{//90 10
    int i,j,k;
    int count=0; 
    int arr[10]={0};
	while(scanf("%d",&i)!=EOF)
	{
	   for(k=0;i>0;k++)//�ж�ÿ�������Ƿ�Ϊ��ż 
	   {
	   	   if((i%10)%2==0)
	   	   {
	   	   	   arr[k]=0;
	   	   	   count++; 
		   }
		   else
		   {
		       arr[k]=1;
		       count++; 
		   } 
	   	   i/=10;
	   }
	}	 
	for(k=count;k>=0;k--)
	{
		printf("%d",arr[k]); 
	 } 
	return 0;
}
