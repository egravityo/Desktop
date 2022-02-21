#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int main()
{
	//指针数组
    int* arr[10];
	//数组指针
	int* (*p)[10]=&arr;
	//函数指针
    int (*p)(int,int)=&Add;
    printf("%d\n",(*p)(2,3));
	//函数指针数组
	int (*parr[10])(int,int); 
	//指向函数指针数组的指针
	int (*(*paarr)[10])(int,int)=&parr;
	return 0;
 } 
