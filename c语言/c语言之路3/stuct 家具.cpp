#include<stdio.h>��
struct furniture//�Ҿ� 
{
   float height;//�߶� 
   char PD[20];//production date ��������
   int age;//����ʱ�� 
 }; 
int main()
{
	struct furniture f1  = {2.33,"20211214",3};
	/*
	printf("%.3f\n",f1.height);
	printf("%s\n",f1.PD);
	printf("%d\n",f1.age); */
    struct furniture* ps = & f1;
	printf("%.3f\n",(*ps).height); 
	printf("%s\n",(*ps).PD);
	printf("%d\n",(*ps).age);
	printf("%d\n",ps->age);
	return  0; 
}
