//小乐乐坐电梯,他前面有n个人,一个电梯可以坐12人,
//坐电梯一上一下需要4分钟,问小乐乐上去需要多少分钟
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m=2; 
	int k; //12 6  
	//24 10
      k=n/12;
      m=k*4+2;
	printf("%d",m);
	return 0;
}
