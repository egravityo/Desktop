#include<iostream>
using namespace std;
int main()
{
	short num1 = 10;
	long double num2 = 20;
	cout << "short占用的空间为：" << sizeof(short) << endl;
	cout << "double占用的空间为：" << sizeof(long double) << endl;
	return 0;
}