//KiKi和BoBo玩井字棋
#include<stdio.h>
int main()
{
	int i=0,j=0;
	char arr[3][3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf(" %c",&arr[i][j]); 
		}
	}
	//输赢
	char flag = 'O'; 
	for(i=0;i<3;i++)
	{
	   //行 
	   if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][2]!='O')
	   {
	       flag=arr[i][0]; 
	   }	
	   //列
	   if(arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]&&arr[0][i]!='O')
	   {
	       flag=arr[0][i]; 
	   }	
	   //对角线
	   if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[2][2]!='O')
	   {
	   	   flag=arr[0][0];
	   } 
	   if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]&&arr[1][1]!='O')
	   {
	   	   flag=arr[1][1];
	   } 
	}
	if(flag=='K')
	{
		printf("KiKi wins!");
	}
	else if(flag=='B')
	{
		printf("BoBo wins!");
	}
    else
    {
    	printf("No wins!");
	}
	return 0;
}
