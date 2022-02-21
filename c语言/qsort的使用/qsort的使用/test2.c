#include<stdio.h>
#include<stdlib.h>
int cmp_float(const void* e1,const void* e2)
{
	/*if (*(float *)e1 - *(float *)e2)
	{
		return 1;
	}
	else if (*(float *)e1 == *(float *)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}*/
	return (*(float*)e1 - *(float*)e2);
}
void test()
{
	float arr[] = { 1.0,2.0,4.0,};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_float);
	int i;
	for (i = 0;i < sz;i++)
	{
		printf("%.3f ", arr[i]);
	}
}
int main()
{
	test();
	return 0;
}