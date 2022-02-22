#include<stdio.h>
int main()
{
   int i,k;
   while(scanf("%d",&k)!=EOF)
   {
   	  for(i=0;i<k;i++)
      {
          printf("*"); 
      }
      printf("\n"); 
   }
   return 0;
}
