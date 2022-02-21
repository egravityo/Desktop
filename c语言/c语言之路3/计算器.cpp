//计算器
#include<stdio.h>
void menu()
{
	printf("\n");
	printf("********************\n");
	printf("**1.Add    2.Sub  **\n");
	printf("**3.Mul    4.Div  **\n");
	printf("**      0.Exit    **\n");
	printf("********************\n");
}
int Add(int x,int y)
{
	return x + y ; 
 } 
int Sub(int x,int y)
{
	return x - y ; 
 } 
int Mul(int x,int y)
{
	return x * y ; 
 } 
int Div(int x,int y)
{
	return x / y ; 
 } 
void  Calc(int (*ful)(int x,int y))
{
	int x,y;
	printf("请输入俩个整数：>");
	scanf("%d%d",&x,&y);
	printf("计算结果是：%d",ful(x,y));
}
int main() 
{
	int input = 0;
	do	
	{
		menu();
		printf("请输入使用的类型:>");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
				    Calc(Add); 
				//	printf("请输入俩个整数：>");
		        //  scanf("%d%d",&x,&y);
		        //	printf("%d",Add(x,y));
			        break; 
			case 2:
				    Calc(Sub);
				//  printf("请输入俩个整数：>");
	            // 	scanf("%d%d",&x,&y);
		        //	printf("%d",Sub(x,y));
			    //  break; 
	        case 3:
	        	    Calc(Mul); 
	        	//	printf("请输入俩个整数：>");
	            //	scanf("%d%d",&x,&y);
		        //	printf("%d",Mul(x,y));
			        break; 
			case 4:
				    Calc(Div); 
				//	printf("请输入俩个整数：>");
		        //  scanf("%d%d",&x,&y);
		        //	printf("%d",Div(x,y));
			        break; 
		    case 0:
			        printf("退出");
					break; 
			default:
				    printf("选择错误！");
				    break; 
		 } 
	}while(input); 
	return 0;
}
/*
int main()
{
	int input = 0;
	int x,y;
	int (*pfArr[5])(int , int )= {0,Add,Sub,Mul,Div}; 
	do
	{
		menu();
		printf("请输入类型：>");
		scanf("%d",&input);
	    if(input>=1&&input<=4)
		{
			printf("请输入俩个操作数：>");
			scanf("%d%d",&x,&y);
			int ret =pfArr[input](x,y);
			printf("%d",ret); 
		else if(input == 0 )
		{
			printf("退出！"); 
		 } 
		else
		{
			printf("选择错误！");
		 } 
	}while(input); 
}*/
