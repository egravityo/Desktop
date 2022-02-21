//º¯ÊıÖ¸Õë2
#include<stdio.h>
void Print(char* str)
{
	printf("%s\n",str);
}
int main()
{
    void (*p)(char* )=Print;
    (*p)("Hello world!");
	return 0;
 } 
