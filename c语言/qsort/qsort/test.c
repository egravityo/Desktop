//#include<stdio.h>
//#include<stdlib.h>
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//int main()
//{
//	float f[] = { 1.2323,25,3.232,53,3.632 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%.3f ", f[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;
}
void Swap(char* bu1, char* bu2,int width)
{
	int i = 0;
	for (i = 0;i < width;i++)
	{
		char temp = *bu1;
		*bu1 = *bu2;
		*bu2 = temp;
		bu1++;
		bu2++;
	}
}
void bubble(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	int j = 0;
	//趟数
	for (;i < sz-1;i++)
	{
		//每一趟
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (cmp((char *)base+width*j,(char*)base+width*(j+1)) > 0)
			{
				//交换
				Swap((char*)base + width * j, (char*)base + width * (j + 1),width);
			}
		}
	}
}
void test()
{
	float f[] = { 1.223,1.233,43.44,3.33 };
	int sz = sizeof(f) / sizeof(f[0]);
	bubble(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%.3f ", f[i]);
	}
}
int main()
{
	test();
	return 0;
}