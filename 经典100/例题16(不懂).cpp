/*����16:��������������m��n���������Լ������С������*/
#include<stdio.h> 
int c; 
int MaxC(int a,int b)
{
	if(a<0||b<0)
	{
		return -1; 
	 } 
	 while(b!=0)
	 {//12 4
	 	c=a%b;//3 1 0
	 	a=b;//4 3 1
	 	b=c;//3 1 0 
	  } 
	return a;
 } 
int main() 
{
	int i,k; 
	int j;
	printf("������������������\n");
	scanf("%d %d",&i,&k);
	j= MaxC(i,k);
	printf("%d��%d�����Լ����%d",i,k,j);
	return 0;
}
