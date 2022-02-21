//联合体的计算
#include<stdio.h>
union s1
{ 
    int i;
	char a[5];
};
union s2
{
	short b[7];
	int i;
};
int main()
{
	printf("%d\n",sizeof(s1));
	printf("%d\n",sizeof(s2));
	return 0;
 } 
