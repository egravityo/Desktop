#include<stdio.h>
struct S1
{
	char c;
    int a;
    char b;
};
struct S2
{
	char c;
	char b;
	int a; 
};
int main()
{
	struct S1 c;
	struct S2 b; 
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(b));
	return 0;
}
