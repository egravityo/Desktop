/*�����Ͼ����У�ÿһ�д����Ҷ��ǵ�����,ÿһ�д��ϵ��¶��ǵ�����.
���в���һ����,���������±�*/
#include<stdio.h>
int Found(int arr[][4], int* x, int* y, int k)
{
	/* 1  4  6  8
	   2  6  7 20
	   4 10 18 25  */
	int row = 0;
	int col = *y - 1;
	while (row<=*x-1&&col>=0)
	{
		if (k < arr[row][col])
		{
			col--;
		}
		else if (k > arr[row][col])
		{
			row++;
		}
		else
		{
			*x = row;
			*y = col;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][4] = { {1,4,6,8},{2,6,7,20},{4,10,18,25} };
	int k;
	scanf_s("%d", &k);
	int x = 3;
	int y = 4;
	int ret=Found(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("�ҵ��ˣ�\n");
		printf("���±��ǣ�%d %d", x + 1,y + 1);
	}
	else
	{
		printf("û�ҵ���\n");
	}
	return 0;
}