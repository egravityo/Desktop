/*�Ӽ�������10�����ݱ��浽������,�������е�Ԫ�����κ���һ��λ��,
�ٽ����һ�������ŵ���һ���洢��Ԫ��*/
#include<stdio.h>
int main()
{
    int arr[10];
    int i;//����ѭ��
	int k;//���arr��9��
	int count = 0;//����������3��4����� 
    printf("������10�����ݣ�");
    for(i = 0;i < 10;i ++)
	{
		scanf("%d",&arr[i]);
	 } 
	k = arr[9]; 
	for(i = 9;i > 0;i--)
	{
		arr[i] = arr[i-1];
	 } 
	arr[0] = k;
	for(i = 0;i < 10;i ++)
	{
		printf("%3d ",arr[i]);
		count++;
		if(count % 4 == 0) 
		{
			printf("\n");
			printf("\n");
		}
	}
	return 0; 
 } 
