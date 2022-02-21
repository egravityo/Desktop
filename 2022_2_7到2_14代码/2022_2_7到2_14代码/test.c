#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<errno.h>
#include<time.h>

//struct S
//{
//	int age;
//	struct S* next;
//};
//int main()
//{
//	struct S a, b, c, * p, * head;
//	scanf_s("%d%d%d", &a.age, &b.age, &c.age);
//	int i = 0;
//	head = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	p = head;
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d\n", (*p).age);
//		p = p->next;
//	}
//	return 0;
//}
//---------------------
//输出倒三角形
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	//打印行数
//	for (i = 0;i < n;i++)
//	{
//		//打印每行
//		//打印空格
//		for (int j = 0;j <i ;j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (int k = 0;k <n-i ;k++)
//		{
//			printf("* ");
//		}
//		//换行
//		printf("\n");
//	}
//	return 0;
//-------------------------
//输入俩个数，求其加减乘除后的结果
//int main()
//{
//	int n=0, m=0;
//	scanf_s("%f%f", &n, &m);
//	double result = (n + m) - (float)(n * m) / m;
//	printf("%.3f", result);
//	return 0;
//}
//---------------------------
//输入俩个数n,m
//打印n的0~m次方
//int fun(int m, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		int sum = 1;
//		int i = 0;
//		for (i = 1;i <= k;i++)
//		{
//			sum *= m;
//		}
//		return sum;
//	}
//}
//int main()
//{
//	int m = 0, n = 0;
//	scanf_s("%d%d", &m, &n);
//	int i = 0;
//	int ret = 0;
//	for (i = 0;i <= n;i++)
//	{
//		//ret = pow(m, i);
//		ret=fun(m, i);
//		printf("%d的%d次方是：%d\n", m, i, ret);
//	}
//}
//------------------------------
//统计一行文本中单词的个数
/* 输入样例:
Let's go to room 209.
输出样例:
5       */
//int main()
//{
//	char arr[1000];
//	gets(arr);
//	char* p;
//	p = arr;
//	int i = 0;
//	int count = 0;
//	for(i=0;i<1000;i++)
//	{
//		if(*p != ' '&&*p!='\0' && (*(p + 1) == ' ' || *(p + 1) == '\0'))
//		count++;
//		p++;
//	}
//	printf("%d", count);
//	return 0;
//}
//---------------------
//找出不是两个数组共有的元素
//int fun_min(int m, int n)
//{
//	return m > n ? n : m;
//}
//int main()
//{
//	int arr1[100];
//	int arr2[100];
//	int arr[200];
//	int arr4[100];
//	int i = 0;
//	int k = 0;
//	int count = 0;
//	int m, n;
//	printf("请输入第一个数组的个数及元素:");
//	scanf("%d", &m);
//	for (i = 0;i < m;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("请输入第二个数组的个数及元素:");
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//int min = fun_min(m, n);
//	for (i = 0;i < m;i++)
//	{
//		int flag1= 1;
//		for (int j = 0;j <n ;j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				flag1 = 0;
//			}
//		}
//		if (flag1)
//		{
//			arr[k++] = arr1[i];
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		int flag2 = 1;
//		for (int j = 0;j < m;j++)
//		{
//			if (arr2[i] == arr1[j])
//			{
//				flag2 = 0;
//			}
//		}
//		if (flag2)
//		{
//			arr[k++] = arr2[i];
//		}
//	}
//	//去重
//	for (i = 0;i < 100;i++)
//	{
//		for (int j = 1;j < 100;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				arr4[i] = arr[i];
//				count++;
//			}
//		}
//	}
//	//输出
//	for (i = 0;i < count;i++)
//	{
//		printf("%d ", arr4[i]);
//	}
//
//	return 0;
//}
//----------------------------------
//去重一个数组
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	int flag = 1;
//	int arr[100];
//	for (;i < n;i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (i = 0;i < n;i++)
//	{
//		flag= 1;
//		for (int j = i+1;j < n;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				for()
//			}
//			
//		}
//	}
//	return 0;
//}\
//-------------------------------------
//使用递归函数计算1到n之和
//int fun(int n)
//{
//	if (n == 1) {
//		return 1;
//	}
//	else if (n==0)
//	{
//		return 0;
//	}
//	else
//	{
//		return n + fun(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = fun(n);
//	printf("%d", ret);
//	return 0;
//}
//--------------------------
//递归实现顺序输出整数	
/*
输入样例：
12345
输出样例：
1
2
3
4
5      */
//void print(int i)
//{
//	printf("%d\n", i);
//}
//int fun(int n)
//{
//	if (n == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return fun(n-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//    for (int i = 0;i < n;i++)
//	{ 
//		int ret = fun(n);
//		print(ret);
//	}
//	return 0;
//}
//------------------------------
////递归求1!+2!+3!+..+n!
//long long jie_c(int n)
//{
//	int i = 0;
//	long long result = 1;
//	for (i = 1;i <= n;i++)
//	{
//		result = i * result;
//	}
//	return result;
//}
//long long fun(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return jie_c(n - 1) + jie_c(n);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	long long ret = fun(n);
//	printf("%lld", ret);
//	return 0;
//}
//------------------------------------
//递归求1!+ 2!+ 3!+ .. + n!
//int fun(int n)
//{
//	if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fun(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	long long sum = 0;
//	for (i = 1;i <= n;i++)
//	{
//		sum += fun(i);
//	}
//	printf("%lld", sum);
//	return 0;
//}
//---------------------
////删除指定的字符
//char* delchar(char* str, char ch)
//{
//	if (str == NULL)
//	{
//		printf("Error!");
//	}
//	else
//	{
//		int len = strlen(str);
//		char* p=(char*)malloc(sizeof(char)*len);
//		int i = 0;
//		int k = 0;
//		while (str[i]!='\0')
//		{
//			if (str[i] != ch)
//			{
//				p[k++] = str[i];
//			}
//			i++;
//		}
//		p[k] = '\0';
//		return p;
//	}
//}
//int main()
//{
//	char str[1000];
//	gets(str);
//	printf("请输入删除的字符：");
//	char ch;
//	scanf_s("%c", &ch);
//	char* p=delchar(str, ch);
//	puts(p);
//	return 0;
//}
//---------------------------------
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	return 0;
//}
//////-----------------------------------
//int main()
//{
//	int a =	
//	return 0;
//}
//----------------
//链表
//#include<stdlib.h>
//struct Node
//{
//	long no;//编号
//	char name[10];//名字
//	struct Node* next;
//};
//int main()
//{
//	struct Node  * head, * p;
//	Node* head = (Node*)malloc(sizeof Node);
//    
//	return 0;
//}
//---------------------
//链表
//typedef struct node
//{
//	long no;//数据域
//	struct node* next;//指针域
//}Node,*Link;
//void DisplayNode(Link head)
//{
//	Link p;
//	p = head->next;
//	if (p == NULL)
//	{
//		printf("空链表");
//	}
//	else
//	{
//		while (p != NULL)
//		{
//			printf("%ld ", p->no);
//			p = p->next;
//		}
//	}
//}
//int main()
//{
//	Link head=NULL;
//	Node node1, node2;
//	node1.no = 122321;
//	node2.no = 23134;
//	Link* p;
//	head = &node1.no;
//	node2.next = &node2.no;
//	node2.next = NULL;
//	head=p = (Link)malloc(sizeof(Node));
//	//遍历
//	DisplayNode(head);
//	return 0;
//}
//----------------------------------
//建立一个三个结点的链表，存放学生数据。我们假定学生数据结
//构中只有学号和年龄两项。可编写一个建立链表的函数 creat。
//#define struct stu Stu
////#define struct stu* TAPY
//typedef struct student
//{
//	int id;
//	int age;
//	struct stu* next;
//}Stu,*Link;
//Stu* create(int n)
//{
//	int i = 0;
//	Link head, pf, pb;
//	for (i = 0;i < n;i++)
//	{
//		pb = (Link)malloc(sizeof(Stu));
//		printf("请输入学号和年龄：");
//		scanf_s("%d%d", &pb->id, &pb->age);
//		if (i == 0)
//		{
//			head = pf = pb;
//		}
//		else
//		{
//			pf->next = pb;
//		}
//		pb->next=NULL;
//		pf = pb; 	
//	}
//	return head;
//}
//-------------------------------------------
//将一个正整数分解质因数
////例：90=2*3*3*5
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 1;
//	for (i = 2;i <= n;i++)
//	{
//		while (n % i == 0)
//		{
//			printf("%d", i);
//			n /= i;
//			if (n != 1)
//			{
//				printf("*");
//			}
//		}
//	}
//	return 0;
//}
//-----------------------------
//创建链表
//typedef struct link
//{
//	int data;
//	struct link* next;
//}Link;
////创建链表的函数
//Link* initlink()
//{
//	Link* p, * head;
//	//初始化
//	head = (Link*)malloc(sizeof(Link));
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		p = (Link*)malloc(sizeof(Link));
//		head->data = i;
//		head->next = NULL;
//		p->next = head->data;
//		p = p->next;	
//	}
//	return head;
//}
//-----------------------------------
//创建链表
//typedef struct node
//{
//	int data;
//	struct node* next;
//}Node, * Link;
//Link* createlist(int arr[], int n)
//{
//	Link head = (Link)malloc(sizeof(Node));
//	head->next = NULL;
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		Link node = (Link)malloc(sizeof(Node));
//		node->data = arr[i];
//		node->next = head->next;
//		head->next = node;
//		
//	}
//	return head;
//}
//-----------------------------
////尾插法创建链表
//typedef struct ndoe
//{
//	int data;
//	struct node* next;
//}Node,*Link;
//Link createlist(int* p, int n)
//{
//	Link head = (Link)malloc(sizeof(Node));
//	Link rear = (Link)malloc(sizeof(Node));
//	head->next = NULL;
//	rear = head;
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		Link node = (Link)malloc(sizeof(Node));
//		node->data = p[i];
//		rear->next = node;
//		rear = node;		
//	}
//	rear->next = NULL;
//	return head;
//}
////-------------------------------------
//// 链表的增加
//typedef struct stu
//{
//	int data;
//	struct stu* next;
//}stu,*Link;
//bool createlist(Link head)
//{
//	Link p, q;
//	Link node;
//	node = (Link)malloc(sizeof(stu));
//	input(node);
//	p = head;
//	q = head->next;
//	if (head->next == NULL)
//	{
//	     //空链表
//		head->next = node;
//	}
//	else
//	{
//		while (q != NULL)
//		{
//			if (q->data > node->data)
//			{
//				//插入
//				node->next = p->next;
//				p = node;
//			}
//			else
//			{
//				//跳过
//				p = q;
//				q = q->next;
//			}
//		}
//		q->next = node;
//	}
//}
////-------------------------
////增加链表(插入)
//typedef struct stu
//{
//	int data;
//	struct stu* next;
//}stu,*Link;
//bool increate(Link head)
//{
//	Link q, p, node;
//	Link node = (Link)malloc(sizeof(node));
//	q = head;
//	p = head->next;
//	input(node);
//	if (head == NULL)
//	{
//		head->next = node;
//	}
//	else
//	{
//		while (p != NULL)
//		{
//			if (node->data < p->data)
//			{
//				//插入点
//				q->next = node->data;
//				node->next = p->data;
//			}
//			else
//			{
//				//跳过
//				q = p;
//				p = p->next;
////			}
////		}
////		q->next = node;
////	}
////}
////-----------------------------------
//typedef struct stu
//{
//	int data;
//	struct stu* next;
//}stu,*Link;
//bool increatelist(Link head)
//{
//	Link p, q;
//	Link node = (Link)malloc(sizeof(stu));
//	input(node);
//	p = head;
//	q->next = head->next;
//	if (head == NULL)
//	{
//		head->next = node->data;
//	}
//	else
//	{
//		while (p != NULL)
//		{
//			if (p->data > node->data)
//			{
//				//插入
//				node->next = p->data;
//				q->next=node->data;
//			}
//			else
//			{
//				//跳过
//				q = p;
//				p = p->next;
//			}
//		}
//		//插到最后一个
//		q->next = node->data;
//	}
////}
//typedef struct stu
//{
//	int data;
//	struct stu* next;
//}stu,*Link;
//bool increate(Link head)
//{
//	Link q, p;
//	Link node = (Link)malloc(sizeof(stu));
//	input(node);
//	q = head;
//	p = head->next;
//	if (head == NULL)
//	{
//		head = node->data;
//		return true;
//	}
//	else
//	{
//		while (p!=NULL)
//		{
//			if (p->data > node->data)
//			{
//				q->next = node->data;
//				node->next = p->data;
//			}
//			else
//			{
//				q = p;
//				p = p->next;
//			}
//		}
//		q->next = node->data;
//		return true;
////	}
////}
////--------------------------
//int main()
//{
//	int i = 0;
//	int input = 0;
//	scanf("%d", &input);
//	do
//	{
//		menu();
//		switch (input)
//		{
//		case 1:
//			break;
//		
//		}
//	} while (input);
//	return 0;
//}
//调试
//int main()
//{
//	int arr[] = { 1,2,4,5,6,78,2};
//	int i = 0;
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n", arr[i]);
//	}	
//	return 0;
//}
////输出9*9乘法口诀表(1)
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		//打印每行
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
////输出9*9乘法口诀表(2)
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 9;i >=1;i--)
//	{
//		//打印每行
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
/*输出9*9乘法口诀表(3)
int main()
{
	int i = 0, j = 0;
	for (i = 9;i >= 1;i--)
	{
		打印每行
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%2d ", j, i, i * j);
		}
		printf("\n");
	}
	for (i = 9;i >= 1;i--)
			{
				打印每行
				for (j = 1;j <= i;j++)
				{
					printf("%d*%d=%2d ", j, i, i * j);
				}
				printf("\n");
			}
	return 0;
}*/
//有一个有序数组,现插入一个数，保证数组仍为升序
//int main()
//{
//	int arr[] = { 1,2,4,6,7,13,16,35 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 32;
//	int i = 0;
//	for (i = 0;i < sz+1;i++)
//	{
//		if (k > arr[i])
//		{
//			//插入该数
//			arr[i] = k;
//			//将后面的数后移
//			int j = i;
//			for (j = sz;j >= i;j--)
//			{
//				arr[j-1] = arr[j];
//			}
//		}
//	}
//	for (i = 0;i < sz + 1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//有一个有序数组,现插入一个数，保证数组仍为升序
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[50];
//	int i = 0;
//	for (;i < n;i++)
//	{
//		scanf_s("%d", &arr[i]);;
//	}
//	int temp = 0;
//	int k = 0;
//	scanf_s("%d", &k);
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] > k)
//		{
//			//替换
//			temp = arr[i];
//			arr[i] = k;
//			k = temp;
//		}
//	}
//	arr[n] = k;
//	for (i = 0;i < n + 1;i++)
//	{
//		printf("%d ", arr[i]);
////	}
////}
// -------------------------------
////判断是否为元音
//int main()
//{
//	char arr[] = { "AaEeIiOoUu" };
//	int sz = strlen(arr);
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0;i < sz;i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("是元音\n");
//				break;
//			}
//		}
//		if (i == sz)
//		{
//			printf("不是元音\n");
//		}
//		getchar();
//	}
//	return 0;
//}
//---------------------------------------
//插入链表
//#include<errno.h>
//typedef struct stu
//{
//	int data;
//	struct stu* next;
//}stu,*Link;
//Link increate(Link head)
//{
//	Link q, p;
//	Link node = (Link)malloc(sizeof(stu));
//	if (node == NULL)
//	{
//		//申请未成功
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		input(node);
//		node->next = NULL;
//		q = head;
//		p = head->next;
//		if (head == NULL)
//		{
//			head->next = node->data;
//		}
//		else
//		{
//			while (p != NULL)
//			{
//				if (p->data > node->data)
//				{
//					//插入该数
//					node->next = p->data;
//					q = node;
//				}
//				else
//				{
//					q = p;
//					p = p->next;
//				}
//			}
//			q->next = node->data;
//		}
//	}
//}
//----------------------------------
//qsort的使用
//typedef struct stu
//{
//	int age;
//	char name[10];
//}stu,*Link;
//void test()
//{
//	stu a, b, c;
//	a.age = 50;
//	b.age = 90;
//	c.age = 120;
//    
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else if (*(float*)e1 == *(float*)e2)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//	//return (*(float*)e1 - *(float*)e2);
//}
//void test1()
//{
//	float f[] = { 1.2,2.32,3.5,3.6 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%.4f ", f[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
//合并俩个有序单链表，要求合并后依旧有序
//取小的尾插
typedef struct stu
{
	int data;
	struct stu* next;
}stu,*Link;
//Link weicha(Link l1, Link l2)
//{
//	Link head = (Link)malloc(sizeof(stu));
//	head->next = NULL;
//	Link tail = (Link)malloc(sizeof(stu));
//	while (l1->next != NULL && l2->next != NULL)
//	{
//		if (l1->data > l2->data)
//		{
//			tail->next = l2;
//			l2 = l2->next;
//		}
//		else
//		{
//			tail->next = l2;
//			l1 = l1->next;
//		}
//		tail = tail->next;
//	}
//	if (l1 != NULL)
//	{
//		tail->next = l1;
//	}
//	if (l2 != NULL)
//	{
//		tail->next = l2;
//	}
//	Link l = (Link)malloc(sizeof(stu));
//	l = head->next;
//  free(head);
//	return l;
//	
//}
//-----------------------------------
//查找单链表的倒数第K个节点
//Link found(Link head,int k)
//{
//	Link fast, slow;
//	fast = slow = head;
//	//让fast先走k步
//	while (k--)
//	{
//		if (fast == NULL)
//		{
//			return NULL;
//		}
//		fast = fast->next;
//	}
//	//同时走
//	while (fast != NULL)
//	{
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return slow;
//}
//-----------------------------
//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char* str3= "hello world";
//	char* str4 = "hello world";
//	if (str1 == str2)
//		printf("same\n");
//	else
//		printf("not same\n");
//	if (str3 == str4)
//		printf("same\n");
//	else
//		printf("not same\n");
//	return 0;
//}
//------------------------------
//unsigned  
//int main()
//{
//	unsigned int a = 10;
//	if (a - 20 > 6)
//	{
//		printf(">6");
//	}
//	else
//	{
//		printf("<=6");
//	}
//	unsigned char ret = a - 20;//2^8-10
//	printf("\n%d", ret);
//	return 0;
//}
//struct S
//{
//	int a;
//	float b;
//}a[3];
//int main()
//{
//	printf("%d", sizeof(a));
//}
//------------------------------
//int main()
//{
//	int* p = (int*)malloc(10000000);
//	if (p == NULL)
//	{
//		printf("s");
//	}
//	else
//	{
//		printf("a");
//	}
//	free(p);
//	return 0;
//}
//越界访问
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	//对malloc函数返回值做判断
//	int i = 0;
//	for (i = 0;i < 40;i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	return 0;
//}
