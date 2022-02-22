#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu 
{
	char name[10];
	int age;
};
int cpm_float(const void* e1, const void* e2)
{
	if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else if(*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
	//return (*(float*)e1 - *(float*)e2);
}
int cmp_by_age(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test1()
{
	float arr[] = { 1.23,2.32,3.5,3.6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cpm_float);
	int i = 0;
	for (;i < sz;i++)
	{
		printf("%.2f ", arr[i]);
	}
}
void test2()
{
	struct Stu s[] = { {"zhangsang",20},{"lisi",30},{"wangwu",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_by_name);
	int i = 0;
	for (;i < sz;i++)
	{
		printf("%d ", s[i].age);
	}
	int j = 0;
	for (;j < sz;j++)
	{
		printf("%s\n ", s[i].name);
	}
}
int main()
{
	test1();
	test2();
	return 0;
}