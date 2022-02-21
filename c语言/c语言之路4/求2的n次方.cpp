//通过<<求2的n次方 
#include<stdio.h>
int main()
{   
    int i;
    scanf("%d",&i);
    long ret = 1<<i;
    printf("%ld",ret);
	return 0;
}
