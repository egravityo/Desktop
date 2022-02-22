/*通过递归，输入1234,打印1 2 3 4*/
#include<stdio.h>
void print(int n)
{
	if(n>9)
	{
		print(n/10); 
	 }
	printf("%d ",n%10); 
 } 
 
int main()
{
	unsigned int num = 0;
	scanf("%d",&num);
	print(num); 
	return 0; 
 } 
