//����һ���ַ���s�������ҳ����в������ظ��ַ�����Ӵ��ĳ��ȡ�
/*����: s = "abcabcbb"   ���: 3  
����: s = "bbbbb"    ���: 1   */
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	gets(arr);
	int len=strlen(arr);
	int i;
	int count=0;
	for(i=0;i<len;i++)
	{
	    if(arr[i]==arr[i+1]);
	    else
	    {
	    	count++;
		}
	}
	printf("%d ",count);
	return 0;
}
 
