#include<stdio.h>
int ADD(int x,int y)
{
	return x+y;
}
int main()
{
	int (*pa)(int,int) = ADD;
    printf("%d",(*pa)(3,2));
	return 0;
}
