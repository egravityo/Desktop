/*KIKI�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽��
���������"˫11"��������·���7��;�������"˫12",������·�
��8��,������Ż�ȯ���Զ����50Ԫ(�Ż�ȯֻ����˫11��˫12ʹ��)
��KIKI����������Ǯ��
���� ԭ�� �·� ���� �����Ż�ȯ(1������,0������) 
����1000.0 11 11 1
���: 650.00  */
#include<stdio.h>
int main()
{
    int Month,Day,i;
    float Price,Money; 
    scanf("%f %d %d %d",&Price,&Month,&Day,&i);
    // printf("%.2f %d %d %d",Price,Month,Day,i); 
    if(i==1)
    {
    	
    	if(Month==11&&Day==11)
    	{
           Money = Price*0.7 - 50.0; 
           printf("Money = %.2f",Money); 
		}
		else
		{
		   Money = Price*0.8 - 50.0; 
           printf("Money = %.2f",Money);
		}
	}
	else
	{
		printf("Money = %.2f",Money);
	}
	return 0;
 } 
