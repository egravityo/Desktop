/*  ������,��λ���������,���Ϊ1,��ż��,��Ϊ0
�������� 231 ��� 11
���� 923 ���101 */
#include<stdio.h>
#include<math.h> 
int main()
{ 
    int n,i=0; 
	int sum=0;
	scanf("%d",&n);
	while(n)
    {
    	int m = n % 10;
    	if(m%2==0)
    	{
    		m = 0;
		}
		else
		{
			m = 1;
		} 
		sum+=m*pow(10,i); 
		i++;
		n/=10; 
	}   
	printf("%d",sum);
	return 0;
 } 
