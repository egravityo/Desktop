#include<stdio.h>
struct stu
{
    char arr[10];
	int age;
    char date[10];	
};
int main()
{
	struct stu c={"³ÂïÚÈÎ",20,"20211224"};
	scanf("%d",&c.age);
	printf("%d\n",c.age); 
	printf("%s\n",c.date);
	return 0; 
}
