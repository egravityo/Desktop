#include<stdio.h>
struct Stu
{
	char name[10];
	int age;
};
void Swap(char* bub1, char* bub2, int width)
{
	int i = 0;
	for (i = 0;i < width;i++)
	{
		char temp = *bub1;
		*bub1 = *bub2;
		*bub2 = temp;
		bub1++;
		bub2++;
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int cmp_float(const void* e1, const void* e2)
{
	return (*(float*)e1 - *(float*)e2);
}
int cmp_Stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void Bubble(void* base, int sz, int width,int (*cmp)(void *e1,void *e2))
{
	int  i = 0;
	//趟数
	for (i = 0;i < sz - 1;i++)
	{
		//每一躺比较的对数
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			//比较
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test1()
{
	int arr[] = { 1,3,5,2,5,7,3,7,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n\n\n");
}
void test2()
{
	float f[] = { 1.34,45.3,1.53,2.54 };
	int sz = sizeof(f) / sizeof(f[0]);
	Bubble(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (;i < sz;i++)
	{
		printf("%.3f ", f[i]);
	}
	printf("\n\n\n\n");
}
void test3()
{
	struct Stu s[] = { {"zhangshang",20},{"lisi",30},{"wangwu",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	Bubble(s, sz, sizeof(s[0]), cmp_Stu_age);
	int i = 0;
	for (;i < sz;i++)
	{
		printf("%d ", s[i].age);
	}
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}
