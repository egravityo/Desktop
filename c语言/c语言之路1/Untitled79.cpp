#include<stdio.h> 
/* 
int main()
{
	printf("������c���Գ������\n");
	printf("�۸�55\n");
    return  0; 
}
*/
struct Book 
{
      char name[26];//c���Գ������
	  short price;//55	
 }; 
int main()
{
	struct Book b1={"c���Գ������",55} ; 
	printf("������%s\n",b1.name); 
	printf("�۸�%d\n",b1.price);  
	return 0; 
 } 
