/*����4������,�ҳ�����������,�ú��������*/
#include<stdio.h>
int Max(int* pa)
{
    int i;
    int* max;
	max = pa;
	for(i = 1;i < 4;i ++)
	{
		if(*max < *(pa+1))
		{
			*max = *(pa+1); 
		}
	 } 
	return *max; 
 } 
int main()
{
	int arr[4];
	int i,max; 
    printf("������4������");
    for(i = 0;i < 4;i ++)
	{
	   scanf("%d",&arr[i]);
	} 
	max = Max(arr); 
    printf("MAX = %d",max); 
	return 0; 
 } 
