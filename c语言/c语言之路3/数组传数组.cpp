#include<stdio.h>
void test(int arr[])
{
	int sz = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sz); 
 } 
int main()
{
	int arr[20]={0};
	test(arr);
	return 0;
}
