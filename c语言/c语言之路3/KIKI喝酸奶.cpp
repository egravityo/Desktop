//KIKI�����̣�һ����������n�����̣�KIKIÿh�����ܺȹ�һƿ���̣�
//����KIKI�ںȹ�һ������֮ǰ���������һƿ,��ô����m���Ӻ�
//ʣ����ƿδ�򿪵�����
#include<stdio.h>
int main()
{
	//5 10 10 4
	//5 10 20 3
	//5 10 21 2
	//8  5 16 4
	int n,h,m;
	scanf("%d %d %d",&n,&h,&m);
	int count = 0;
	if(m%h)
	{
		count = n - (m/h)-1;
		printf("%d\n",count);		
	 } 
	else
	{
	    count = n - (m/h);
	    printf("%d\n",count);
	 }  
	return 0;
 } 
