/*��ҵ2������һ���������������d������n��ĳλ���֣��򷵻�1�����򷵻�0*/
#include<stdio.h>
int Seek(int x,int y)//Seek��ʾѰ�Һ���,xΪ����,nΪ���� 
{ 
    int f; 
	for(;y>0;y=y/10)
	{
		f=1; 
		if(x==y%10) 
		{
			printf("1");
		}
		else if 
		f=0;
	
    }
    if(f==1)
    printf("1");
    else
    printf("0");
}
int main()
{
	int i,k;
	int s; //��������� 
	printf("������һ�����֣�");
    scanf("%d",&i); 
    printf("������һ��������");
    scanf("%d",&k); 
    s=Seek(i,k);
	printf("",s);
	return 0; 
 } 
