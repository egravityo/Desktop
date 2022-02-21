//图案4
#include<stdio.h> 
int main()
{
	int i,j,line;
	while(~scanf("%d",&line))
	{
		//上面一部分 
	for(i=0;i<line;i++)
	{
	   for(j=0;j<line-i;j++) 
	   {
	   	  printf("* ");
	   }
	   printf("\n");
	}
	//下面一部分
	for(j=0;j<line-1;j++)
	{
		for(i=0;i<=j+1;i++)
		{
			printf("* ");
		}
		printf("\n");
	 } 
    }
	return 0;
}

