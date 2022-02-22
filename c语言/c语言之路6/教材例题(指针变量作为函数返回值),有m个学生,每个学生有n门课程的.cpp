/*教材例题(指针变量作为函数返回值),有m个学生,每个学生有n门课程的
成绩。要求在用户输入学生序号以后,能输出该学生的所有成绩,用指针
函数来实现  
#include<stdio.h>
void *search (float (*p)[4],int n)
{
    return (*(p+n));
}
int main()
{
	float mark[][4]={{10,20,30,40},{20,30,40,50},{30,40,50,60}};
	float* search(float (*p)[4],int n);//函数声明
	float *p;//用来接收
    p=search(mark,2);
	int i;
	for(i=0;i<4;i++)
	{
		printf("%.2f \t",*(p+i));
	 } 
	return 0;
 } */
#include<stdio.h>
void *search(float (*p)[4],int n)
{
    return *(p+n);	
} 
int main()
{
	int i;
	float mark[][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float* search(float(*p)[4],int n);
	float* sp;
	sp=search(mark,3);
    for(i=0;i<4;i++)
    {
    	printf("%.2f ",*(sp+i));
	}
	return 0;
}

