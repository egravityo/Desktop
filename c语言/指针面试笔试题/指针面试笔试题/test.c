#include<stdio.h>
#include<string.h>
int main()
{
	//数组名是首元素的地址
	// 1.sizeof(数组名)-数组名表示整个数组
	// 2.&数组名-数组名表示整个数组
	//一维数组
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节-16
	printf("%d\n", sizeof(a + 0));//4-数组名这里表示首元素地址-a+0还是首元素地址
	printf("%d\n", sizeof(*a));//数组名表示首元素地址，*a就是首元素--4
	printf("%d\n", sizeof(a + 1));//4/8--第二个元素的大小
	printf("%d\n", sizeof(a[1]));//4--第二个元素的大小
	printf("%d\n", sizeof(&a));//4
	printf("%d\n", sizeof(*&a));//16
	printf("%d\n", sizeof(&a + 1));//4
	printf("%d\n", sizeof(&a[0]));//4
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("\n\n\n");
	//字符数组 
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4
	printf("\n\n\n");
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0]+1));//随机值
	return 0;
}