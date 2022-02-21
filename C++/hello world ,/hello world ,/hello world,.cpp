#include<iostream>
#define Day 7
using namespace std;
int main()
{
	cout << "Hello world!" << endl;
	int a = 10;
	cout << "a=" << a << endl;
	//常量：
	//1.define定义的宏常量
	cout << "一周有：" << Day << "天" << endl;
	//2.const 修饰的变量
	const int month = 10;
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << "sum=" << sum << endl;
	return 0;
} 