#include<stdio.h>
struct student 
{
	char name[20];
	int age;
	char id[20]; 
};
int main()
{
    struct student s1 = {"ÕÅÈı",20,"20200201"};
	printf("%s\n",s1.name); 
	printf("%d\n",s1.age); 
	printf("%s\n",s1.id); 
	return 0;  
 } 
