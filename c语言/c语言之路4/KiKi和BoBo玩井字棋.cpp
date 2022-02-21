//KiKi和BoBo玩 “井”字棋。也就是在九宫格中，只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，
//就能获胜。请根据棋盘状态，判断当前输赢。
/*输入描述：
三行三列的字符元素，代表棋盘状态，字符元素用空格分开，代表当前棋盘，其中元素为K代表KiKi玩家的棋子，为O表示没有棋子，为B代表BoBo玩家的棋子。
输出描述：
如果KiKi获胜，输出“KiKi wins!”；
如果BoBo获胜，输出“BoBo wins!”；
如果没有获胜，输出“No winner!”。*/
#include<stdio.h>
int main()
{
	char arr[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%c",&arr[i][j]);
            getchar(); 
		}
	}
    if(arr[0][0]=='K')
	{
		if(arr[0][1]=='K'&&arr[0][2]=='K')
		{
			printf("KiKi wins!");
		}
		else if(arr[1][0]=='K'&&arr[2][0]=='K')
		{
			printf("KiKi wins!");
		}
		else if(arr[1][1]=='K'&&arr[2][2]=='K')
		{
			printf("KiKi wins!");
		}
	 } 
	else if(arr[0][0]=='B')
	{
		if(arr[0][1]=='B'&&arr[0][2]=='B')
		{
			printf("BiBi wins!");
		}
		else if(arr[1][0]=='B'&&arr[2][0]=='B')
		{
			printf("BiBi wins!");
		}
		else if(arr[1][1]=='B'&&arr[2][2]=='B')
		{
			printf("BiBi wins!");
		}
	 } 
	 else
	 {
	 	printf("No winner!");
	 }
	return 0;
 } 
