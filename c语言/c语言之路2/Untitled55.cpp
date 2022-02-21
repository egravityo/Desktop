//每调用一个函数，num就加一 
#include<stdio.h>
void ADD(int* p)
{
	(*p)++;
}
int main()
{
	int sum = 0;
	ADD(&sum);
	printf("sum=%d\n",sum); 
	ADD(&sum);
	printf("sum=%d\n",sum);
	ADD(&sum);
	printf("sum=%d",sum);
	return 0; 
 } 
