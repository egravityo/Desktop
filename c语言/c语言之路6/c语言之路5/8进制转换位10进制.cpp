//8����ת��λ10����
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("������8����:");
	scanf("%d",&n);
    int sum=0;
    int i=0;
    for(;n!=0;i++)
	{
		sum+=(n%10)*(int)pow(8,i);
		n/=10;
	} 
	printf("��Ӧ10����:");
	printf("%d",sum);
	return 0;
 } 
