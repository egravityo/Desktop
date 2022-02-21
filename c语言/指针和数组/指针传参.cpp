//
#include<stdio.h>
void test(int *p)
{
	
}
void test1(int **p)
{
	
}
int main()
{ 
    int a=10;
    int arr[10];
    int *z= &a;
    int* arr1[10];
    test(&a);
    test(arr); 
    test(z);
    test1(&z);
    test1(arr1);
	return 0;
}
