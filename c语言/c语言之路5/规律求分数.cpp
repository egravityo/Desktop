//本关任务：编写程序计算   1 - 1/2 + 1/3 - 1/4 + ..... +1/99 - 1/100 的值,
//并显示出来(保留结果为小数点后三位)
#include<stdio.h>
int main()
{
	double sum=0;
	int i;
	int flag=1;
	double z;
	for(i=1;i<101;i++)
	{
		z=flag*1.0/i;
		sum+=z;
		flag=-flag;
	}
	printf("%.3f",sum);
	return 0;
}
