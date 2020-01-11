//2020-1-1  by kid
//C++中的常量，不可更改的数据。两种定义方式：宏常量、const修饰变量

#include<iostream>
using namespace std;

//1、宏常量
#define week 7

int main()
{
	cout << "一周总共有" << week << "天\n";
	//week =8; //报错，宏常量不可修改

	//2、const修饰变量
	const int month = 12;
	cout << "一年总共有" << month << "月\n";
	//month=24;//报错，常量不可修改

	return 0;
}