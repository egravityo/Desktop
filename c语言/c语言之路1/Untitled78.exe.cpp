#include<stdio.h>
int main()
{
   //����˷��ھ���
   int i=1;
   for(int j=1;j<=9;j++) 
   { 
      for(i=1;i<=j;i++)
      {
      printf("%d*%d=%2d ",j,i,j*i);
      }
      printf("\n");
    }
    return 0;
} 
