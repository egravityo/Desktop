//�õݹ����n��
#include<stdio.h>
int Rank(int x) 
{
   if(x==1||x==0)
   {
     return 1;	 
   } 
   else
   return x*Rank(x-1);
}
int main()
{
	int ret;
	int i;
	printf("������һ�����֣�");
	scanf("%d",&i);
	ret = Rank(i);//Rank����ײ� 
	printf("\n"); 
	printf("%d�Ľײ�Ϊ��%d",i,ret); 
	return 0; 
 } 
