//KiKi��BoBo�� ���������塣Ҳ�����ھŹ����У�ֻҪ�����С��У���������Խ��������������������ͬ�����ӣ�
//���ܻ�ʤ�����������״̬���жϵ�ǰ��Ӯ��
/*����������
�������е��ַ�Ԫ�أ���������״̬���ַ�Ԫ���ÿո�ֿ�������ǰ���̣�����Ԫ��ΪK����KiKi��ҵ����ӣ�ΪO��ʾû�����ӣ�ΪB����BoBo��ҵ����ӡ�
���������
���KiKi��ʤ�������KiKi wins!����
���BoBo��ʤ�������BoBo wins!����
���û�л�ʤ�������No winner!����*/
#include<stdio.h>
int main()
{
	char arr[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%c",&arr[i][j]);
            getchar(); 
		}
	}
    if(arr[0][0]=='K')
	{
		if(arr[0][1]=='K'&&arr[0][2]=='K')
		{
			printf("KiKi wins!");
		}
		else if(arr[1][0]=='K'&&arr[2][0]=='K')
		{
			printf("KiKi wins!");
		}
		else if(arr[1][1]=='K'&&arr[2][2]=='K')
		{
			printf("KiKi wins!");
		}
	 } 
	else if(arr[0][0]=='B')
	{
		if(arr[0][1]=='B'&&arr[0][2]=='B')
		{
			printf("BiBi wins!");
		}
		else if(arr[1][0]=='B'&&arr[2][0]=='B')
		{
			printf("BiBi wins!");
		}
		else if(arr[1][1]=='B'&&arr[2][2]=='B')
		{
			printf("BiBi wins!");
		}
	 } 
	 else
	 {
	 	printf("No winner!");
	 }
	return 0;
 } 
