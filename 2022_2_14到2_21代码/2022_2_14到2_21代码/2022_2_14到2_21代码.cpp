#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#define MAX 3
//����һ�����������������ѧ�����ݡ����Ǽٶ�ѧ�����ݽ�
//����ֻ��ѧ�ź���������ɱ�дһ����������ĺ��� creats
//typedef struct data
//{
//	int ad;
//	int age;
//}data;
//typedef struct stu
//{
//	data student[MAX];
//	struct stu* next;
//}stu, * Link;
//
////����������
//void CreateList(Link head)
//{
//	int i = 0;
//	for (i = 0;i < MAX;i++)
//	{
//		printf("�������%d��ѧ������Ϣ\n", i + 1);
//		printf("������ѧ�ţ�>");
//		scanf("%d", &(head->student[i].ad));
//		printf("���������䣺>");
//		scanf("%d", &(head->student[i].age));
//	}
//	printf("�����ɹ���\n");
//}
////�������
//void PrintList(Link head)
//{
//	if (head == NULL)
//	{
//		return;
//	}
//	int i = 0;
//	printf("%-15s\t%-10s\n", "ѧ��", "����");
//	for (i = 0;i < MAX;i++)
//	{
//		printf("%-15d\t%-10d\n", head->student[i].ad, head->student[i].age);
//	}
//	
//}
//int main()
//{
//	Link head = (Link)malloc(sizeof(stu));
//	head->next = NULL;
//	CreateList(head);
//	//�������
//	PrintList(head);
//	return 0;
//}
//------------------------------------
//����(2^2)!+(3^2)!
//ƽ������
//int pingf(int n)
//{
//	int i = 1;
//	int result = 1;
//	for (i = 1;i <= 2;i++)
//	{
//		result *= n;
//	}
//	return result;
//}
////�ײ㺯��
//int jiec(int n)
//{
//	int ret1=pingf(n);
//	int i = 1;
//	int result = 1;
//	for (i = 1;i <= ret1;i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//int main()
//{
//	int ret1 = jiec(2);
//	int ret2 = jiec(3);
//	int sum = ret1 + ret2;
//	printf("%d", sum);
//	return 0;
//}
//-----------------------------
//����һ���ַ�,ͳ������
//int fun(char* p, int arr[])
//{
//	int count = 0;
//	while (*p!='\0')
//	{
//		//���������ַ���
//		while (*p > '9' || *p < '0')
//		{
//			p++;
//		}
//		//��������
//		int m = 0;
//		int i = 0;
//		while (*p >= '0' && *p <= '9')
//		{
//			m = m * 10 + (*p-'0');
//			p++;
//		}
//		count++;
//		arr[i] = m;
//		i++;
//	}
//  return count; 
//}
//int main()
//{
//	char* p;
//	p = (char*)malloc(100);
//	printf("������һ���ַ���>");
//	gets_s(p,100);
//	int n = 0;
//	int arr[10];
//	n = fun(p,arr);
//	int i = 0;
//	printf("һ����%d��\n", n);
//	for (i = 0;i < n;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//-------------------------------
//Link pListNode(Link head,int data)
//{
//	Link p = malloc(sizeof(stu));
//	p = head;
//	Link q = malloc(sizeof(stu));
//	q->next = NULL;
//	q->data = data;
//	if (p == head)
//	{
//		p->next = q;
//		return head;
//	}
//	//����
//	while (p != NULL)
//	{
//		p->p = next;
//	}
//	p->next = q->data;
//	return head;
//}
//----------------------------
//��ӡ������ͼ��
/*
    |   |   
 ---|---|---
    |   |  
 ---|---|---
    |   |   
 */
//----------------------------
//˫������
//typedef struct DoublyNode
//{
//    int data;
//    struct DoublyNode* prior;
//    struct DoublyNode* next;
//}DoublyNode;
//typedef struct DoublyLinkList
//{
//    int length;
//    DoublyNode* next;
//}DoublyLinkList;
///** ��˫�������е�ָ��λ�ò���һ��Ԫ��*/
//void DelDoublyList(DoublyLinklist* dlList, int pos, int data)
//{
//    //�����ս��
//    DoublyNode* node = (DoublyNode*)malloc(sizeof(DoublyNode));
//    node->data = data;
//    node->prior = NULL;
//    node->next = NULL;
//    //�ڵ�һ��λ�ò�����
//    if (pos == 1)
//    {
//        node->next = dlList->next;
//        dlList->next = node;
//        node->next->prior = node;
//        dlList->length++;
//        return;
//    }
//};
////-----------------------------------
//#define MAX 20
//typedef struct Seqlsit
//{
//    int* data;
//    int capacity;
//    int size;
//}Seqlist,*Selist;
//void InitMy_list(Selist pc)
//{
//    pc->size = 0;
//    pc->capacity = MAX;
//}
//int main()
//{
//    Seqlist my_list;
//    Selist my_list = (Selist)malloc(sizeof(Seqlist) * MAX);
//    InitMy_list(&my_list);
//    
//    int input = 0;
//    do
//    {
//        
//    } while (input);
//}
//------------------------------
//qsort��ʵ��
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//    int arr[] = { 1,23,4,2,67,33,45 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//    int i = 0;
//    for (i = 0;i < sz;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//int main()
//{
//    test1();
//    return 0;
//}
//------------------------------------
//���ֲ���
//int Half_Found(int arr[], int k,int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//    {
//        int mid= (right + left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return  mid;
//        }
//    }
//    //û�ҵ�
//    return 0;
//}
//int main()
//{
//    int arr[15] = { 1,2,3,5,8,12,13,14,18,20,23,26,37,57,69 };
//    printf("��������ҵ�����");
//    int k = 0;
//    scanf_s("%d", &k);
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = Half_Found(arr, k,sz);
//    if (ret == 0)
//    {
//        printf("û�ҵ���\n");
//    }
//    else {
//        printf("�ҵ���,���±��ǣ�%d", ret+1);
//    }
//    return 0;
//---------------------------------------------
//ָ������
//int main()
//{
//    int a[] = { 1,2,3,4,5 };
//    int b[] = { 2,3,4,5,6 };
//    int c[] = { 3,4,5,6,7 };
//    int* p[3] = { a,b,c };
//    int i = 0;
//    for (i = 0;i < 3;i++)
//    {
//        int j = 0;
//        for (j = 0;j < 5;j++)
//        {
//            //printf("%d ", *(p[i] + j));
//            printf("%d ", p[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//-------------------------------
//����ָ��
int main()
{
    int arr[10] = { 1,2,3,4,5 };
    int(*p)[10] = &arr;
    int i = 0;
    for (i = 0;i < 10;i++)
    {
        printf("%d ", *(*p+i));
    }
    return 0;
}
