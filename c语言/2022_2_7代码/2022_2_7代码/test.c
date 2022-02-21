#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	struct Note Note1 = { 1,NULL };
//	struct Note Note2 = { 2,NULL };
//	struct Note Note3 = { 3,NULL };
//	struct Note Note4 = { 4,NULL };
//	Note1.next = &Note2;
//	Note2.next = &Note3;
//	
//	return 0;
//}
int fun(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fun(n - 1);
	}
}
int main()
{
	//Ä©Î²0µÄ¸öÊý
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	long ret = fun(n);
	while (ret)
	{
		if (ret % 10 == 0)
		{
			ret++;
		}
		ret /= 10;
	}
	return 0;
}