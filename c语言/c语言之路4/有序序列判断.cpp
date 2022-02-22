//”––Ú–Ú¡–≈–∂œ 
#include<stdio.h>
int main()
/*
{
    int i;
    int flag;	 
	int arr[10]={0};
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	} 
    for(i=0;i<10;i++)
	{
		 if(arr[i]>=arr[i+1])
		 {
		     flag = 1;
		 }
		 else if(arr[i]<=arr[i+1])
		 {
             flag = 1;
		 }
		 else
		 {
		 	 flag = 0;
		 }
	 } 
	if(flag==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
{
	int i;
	int flag;
	int arr[10]={0};
	scanf("%d",&arr[0]);
    for(i=0;i<9;i++)
    {
    	scanf("%d",&arr[i+1]);
    	if(arr[i]>=arr[i+1])
    	{
    		flag = 1;
		}
		else if(arr[i]<=arr[i+1])
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	if(flag==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}*/
{
	int i,flag1=0,flag2=0;
    int arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
	}
	for(i=0;i<9;i++)
	{
		if(arr[i]>arr[i+1])
		{
			flag1=1;
		}
		else if(arr[i]<arr[i+1]) 
		{
			flag2=1; 
		}
	}
	if(flag1&&flag2)
	{
		printf("No");
	 } 
	else
	{
		printf("Yes");
	 } 
	return 0;
}


