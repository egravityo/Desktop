//??????
#include<stdio.h>
void menu()
{
	printf("******************\n");
	printf("** 1.Add  2.Sub **\n");
	printf("** 3.Mul  4.Div **\n");
	printf("****  0.Eixt  ****\n");
	printf("******************\n");
}
int Add(int x,int y)
{
	return x+y;
} 
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y;
}
int main()
{
	int input=0;
	int x=0;
	int y=0;
    int (*pArr[5])(int,int)={0,Add,Sub,Mul,Div};
	do
	{
		menu(); 
		printf("??ѡ????>");
		scanf("%d",&input);
		if(input>0&&input<=4)
		{
			printf("??????????????????>");
			scanf("%d%d",&x,&y);
			int ret=pArr[input](x,y);
			printf("%d\n",ret);
		}		
		else if(input==0)
		{
			printf("?뿪??\n");
		}
		else
		{
			printf("ѡ????????\n"); 
		}
	}while(input);
	return 0;
 } 
