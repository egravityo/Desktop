//结构体类型计算
#include<stdio.h>
struct stu
{	
	double b;
	char i;
	int c;	
}s1;
struct s2
{
    char c;
	struct stu s1;
	double d;	
};
int main()
{
    struct stu;
    printf("%d  ",sizeof(s2));
	return 0;
 } 
