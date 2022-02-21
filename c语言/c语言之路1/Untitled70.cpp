#include<stdio.h>
	int main(void)
	{  
		int  score=0;
		printf("«Î ‰»Î∑÷ ˝£∫%d\n");
	    scanf("%d",&score); 
		if(score<0||score>100)
		{
	       printf("Score is error!\n");
	       return 0; 
		}
		if(score>=90)
		{
			printf("A\n");
		}
		if(score>=80&&score<89)
		{
		    printf("B\n");
		}
		if(score>=70&&score<79)
		{
			printf("C\n");
		}
		if(score>=60&&score<69)
		{
			printf("D\n");
		}
		else
		{
			printf("E\n"); 
		 } 
		

		
	  /*********Begin*********/
	  
	  
	  /*********End**********/ 
       return 0;
	}

