//������
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
	printf("����������������>");
	scanf("%d%d",&x,&y);
	printf("�������ǣ�%d",ful(x,y));
}
int main() 
{
	int input = 0;
	do	
	{
		menu();
		printf("������ʹ�õ�����:>");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
				    Calc(Add); 
				//	printf("����������������>");
		        //  scanf("%d%d",&x,&y);
		        //	printf("%d",Add(x,y));
			        break; 
			case 2:
				    Calc(Sub);
				//  printf("����������������>");
	            // 	scanf("%d%d",&x,&y);
		        //	printf("%d",Sub(x,y));
			    //  break; 
	        case 3:
	        	    Calc(Mul); 
	        	//	printf("����������������>");
	            //	scanf("%d%d",&x,&y);
		        //	printf("%d",Mul(x,y));
			        break; 
			case 4:
				    Calc(Div); 
				//	printf("����������������>");
		        //  scanf("%d%d",&x,&y);
		        //	printf("%d",Div(x,y));
			        break; 
		    case 0:
			        printf("�˳�");
					break; 
			default:
				    printf("ѡ�����");
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
		printf("���������ͣ�>");
		scanf("%d",&input);
	    if(input>=1&&input<=4)
		{
			printf("������������������>");
			scanf("%d%d",&x,&y);
			int ret =pfArr[input](x,y);
			printf("%d",ret); 
		else if(input == 0 )
		{
			printf("�˳���"); 
		 } 
		else
		{
			printf("ѡ�����");
		 } 
	}while(input); 
}*/
