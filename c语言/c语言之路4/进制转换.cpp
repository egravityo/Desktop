//½øÖÆ×ª»»   10->6 
#include<stdio.h>
int main()
{
	int n=0;
	int i=0; 
	int arr[20]={0};
	scanf("%d",&n);
	while(n) 
	{//60->140
		arr[i]=n%6;
		i++;
		n/=6; 
    }
    for(i--;i>=0;i--)
	{
	    printf("%d",arr[i]);
	 } 
	return 0;
}
