#include<stdio.h>
void Print(char* str)
{
	printf("%s",str);
}
int main()
{
	//����ָ�� 
    void (*p)(char*)  = Print;
    (*p)("Hello world��");	 
	return 0; 
}
