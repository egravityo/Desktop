/*��������ת����
�������ְ������������ַ�:I��V��X��L��C��D��M��
�ַ�          ��ֵ
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
����ģ�I���Է���V��X�����
	    X���Է���L��C�����
	    C���Է���D��M�����     */ 
#include<stdio.h>
#include<string.h>
int fun(char* s)
{
	int len=strlen(s);
	int i=0;
	int sum=0;
	for(i=0;i<len;i++)
	{
		switch(*(s+i))
		{
			case 'V':sum+=5;
		    break;
		    case 'L':sum+=50;
		    break;
		    case 'D':sum+=500;
		    break;
		    case 'M':sum+=1000;
		    break;
		    case 'I':
		    	if(i+1<len&&*(s+i+1)=='V'||*(s+i+1)=='X')
		    	{
		    		sum-=1;
				}
				else
				{
					sum+=1;
				}
	        break;
	        case 'X':
	        	if(i+1<len&&*(s+i+1)=='L'||*(s+i+1)=='C')
		    	{
		    		sum-=10;
				}
				else
				{
					sum+=10;
				}
	        break;
	        case 'C':
	        	if(i+1<len&&*(s+i+1)=='D'||*(s+i+1)=='M')
		    	{
		    		sum-=100;
				}
				else
				{
					sum+=100;
				}
	        break;
		}
	}
	return sum;
}
int main()
{
	char s[10];
	gets(s);
    int ret=fun(s);
    printf("%d ",ret);
    return 0;	
} 
