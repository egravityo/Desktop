#include<stdio.h>
#include<string.h>
int main()
{
	//����������Ԫ�صĵ�ַ
	// 1.sizeof(������)-��������ʾ��������
	// 2.&������-��������ʾ��������
	//һά����
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�-16
	printf("%d\n", sizeof(a + 0));//4-�����������ʾ��Ԫ�ص�ַ-a+0������Ԫ�ص�ַ
	printf("%d\n", sizeof(*a));//��������ʾ��Ԫ�ص�ַ��*a������Ԫ��--4
	printf("%d\n", sizeof(a + 1));//4/8--�ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(a[1]));//4--�ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&a));//4
	printf("%d\n", sizeof(*&a));//16
	printf("%d\n", sizeof(&a + 1));//4
	printf("%d\n", sizeof(&a[0]));//4
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("\n\n\n");
	//�ַ����� 
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4
	printf("\n\n\n");
	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0]+1));//���ֵ
	return 0;
}