//ÁªºÏÌå 
#include<stdio.h>
union U 
{
    int n;
    //int arr[20];
    char arr[17];
};
int main()
{
	union U u;
	printf("%d\n",sizeof(u));
	return 0;
}
