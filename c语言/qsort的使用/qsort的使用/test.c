#include<stdio.h>
#include<stdlib.h>
void cmp_int(const void* e1, const void* e2)
{
	return *(int *)e1 - *(int *)e2;
}
void test1()
{
	int arr[] = { 2,4,6,8,10,21,1,1,4,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	test1();
	return 0;
}