#include<stdio.h>
int main()
{//位都是二进制位//相同为0,相异为1; 
	int a = 3;
	int b = 5;
	int c = a & b;//按位与 
	int d = a | b;//按位或 
	int e = a ^ b;//按位异或 
	printf("%d\n",c);
	printf("%d\n",d);
    printf("%d\n",e);
	//000000000000000000000011
	//000000000000000000000101
	//000000000000000000000001  与 1
	//000000000000000000000111  或 7
	return 0;
}
