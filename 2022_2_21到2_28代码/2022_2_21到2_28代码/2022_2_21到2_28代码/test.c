#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<assert.h>
//
//int i;//ȫ�ֱ�����Ĭ����0
//int main()
//{
//	i--;//-1
//    //sizeof���������������Ľ����������unsigned int
//    
//	if (i > sizeof(i)) {
//		printf(">\n");
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}
//----------------------------------
//дһ������,��������һ���ַ���
//void fun(char* p,int sz)
//{
//	assert(p);
//	char* left = p;
//	char* right = p+ sz - 1;
//	while (left <=  right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[] = "abcdefg";
//	int sz = strlen(str);
//	fun(str,sz);
//	puts(str);
//	return 0;
//}
//-----------------------
