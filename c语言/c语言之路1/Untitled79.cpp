#include<stdio.h> 
/* 
int main()
{
	printf("书名：c语言程序设计\n");
	printf("价格：55\n");
    return  0; 
}
*/
struct Book 
{
      char name[26];//c语言程序设计
	  short price;//55	
 }; 
int main()
{
	struct Book b1={"c语言程序设计",55} ; 
	printf("书名：%s\n",b1.name); 
	printf("价格：%d\n",b1.price);  
	return 0; 
 } 
