/*俩个乒乓球队进行比赛，各出3人.甲队为A，B，C.乙队为X，Y，Z；
现已抽签决定好。进行全方位打听，A说不与X，Z比赛，C说不与X比赛
，请编写程序找出俩队赛手的名单*/
#include<stdio.h>
int main()
{
	char A,B,C;
	for(A='X';A>='X'&&A<='Z';A++)
	{
		for(B='X';B>='X'&&B<='Z';B++)
		{
			for(C='X';C>='X'&&C<='Z';C++)
			{
				if(A!='X'&&A!='Z'&&C!='X'&&A!=B&&A!=C&&B!=C)
				printf("A与%c比赛,B与%c比赛,C与%c比赛\n",A,B,C); 
			}
		}
	 } 
	return 0; 
 } 
