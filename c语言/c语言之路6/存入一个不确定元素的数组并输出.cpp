#include<stdio.h>
int main()
{
	int count=0;
	int arr[100];
	int i=0;
	for(;;i++)
	{
		if(getchar()=='\')
		{
			break;
		}
		else
		{
			scanf("%d",&arr[i]);
			count++;
		}
	}
	printf("����������%d��Ԫ��\n",count);
	for(i=0;i<count;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
