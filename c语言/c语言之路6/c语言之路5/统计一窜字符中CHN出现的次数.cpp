//统计一窜字符中CHN出现的次数
//例：输入：CCHNCHN
//输出： 7
#include<stdio.h>
int main()
{
	char arr[100]={0};
	scanf("%s",&arr);
	int c=0;
	int ch=0;
	int chn=0;
	char* p=arr;
	while(*p)
	{
		if(*p=='C')
		{
			c++;
		}
		else if(*p=='H')
		{
			ch+=c;
		}
		else if(*p=='N')
		{
			chn+=ch; 
		}
		p++; 
	}
	printf("%d ",chn);
	return 0;
 } 
