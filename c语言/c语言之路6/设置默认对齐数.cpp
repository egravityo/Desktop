//����Ĭ�϶�����
#include<stdio.h>
#pragma pack(2) 
struct s1 
{
	char a;
	int  b;
	double c;
};
#pragma pack()
int main()
{
	struct s1 s;
	printf("%d",sizeof(s));
	return 0;
 } 
