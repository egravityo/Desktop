#include<iostream>
using namespace std;
bool accept()
{
	cout<<"you want to ����\n";
	char answer=0;
	cin>>answer;
	if(answer=='Y')
	{
		return true;
	}
	else
	{
		return false;
	}
}
