//�Ӽ�����������һ���ַ�,����ж��ǲ�����ĸ,��������
#include<stdio.h> 
#include<ctype.h>
int main()
{
	int  ch;
	while((ch = getchar())!=EOF)
	{
		//if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		if(isalpha(ch))
		{
		    printf("YES!");
		}
		else 
		{
			printf("NO!");
		}
		getchar();
		printf("\n"); 
	}
	return 0;
}
