//����һ����,����ײ� 
#include<stdio.h>
int Fac1(int n)
{
	int k;
	int ret = 1; 
	for(k=1;k<=n;k++)
	{
		ret*=k; 
	 } 
    return ret; 
 } 
int Fac2(int n)
{
   if(n<=1)
   {
   	  return 1; 
	} 
    else
	{
		return n*Fac2(n-1); 
	 } 
 } 
int main()
{
	int i;
	scanf("%d",&i);
	int ret = Fac1(i);//��ѭ���ķ���
	int jet = Fac2(i);//�õݹ�ķ��� 
	printf("%d\n",ret); 
	printf("%d",jet);
	return 0;
 } 
