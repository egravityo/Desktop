//��һ���������У��������ظ�������������ɾ��ָ����ĳһ��������
//���ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
#include<stdio.h>
int main()
{
	int i,n,m;
	printf("������������м���Ԫ�أ�\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
    }
    printf("��������Ҫɾ��������");
    scanf("%d",&m); 
    for(i=0;i<n;i++)
	{
		if(arr[i]!=m)
		{
			printf("%d ",arr[i]);
		}
	 } 
	return 0;
 } 
