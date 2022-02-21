#include<stdio.h>
	int main(void)
	{  
		float score;
		printf("%.0f");
		scanf("%f",&score);
		if(score<0||score>100)
		{
	       printf("Score is error!");
		}
		else if(score>=90)
		{
			printf("A");
		}
		else if(score>=80&&score<89)
		{
		    printf("B");
		}
		else if(score>=70&&score<79)
		{
			printf("C");
		}
		else if(score>=60&&score<69)
		{
			printf("D");
		}
		else
		{
			printf("E");
		}

	  /*********Begin*********/
	  
	  
	  /*********End**********/ 
       return 0;
	}

