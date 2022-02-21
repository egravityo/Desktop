#include<iostream>
using namespace std;
bool accept()
{
	char an=0;
	cin>>an;
	if(an=='B'){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	char answer=0;
	cin>>answer;
	if(answer=='Y')
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	int i=accept();
	cout<<i<<endl;
	return 0;
} 
