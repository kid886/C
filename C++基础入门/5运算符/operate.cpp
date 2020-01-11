//2020-1-10 by kid
//运算符：算术、赋值、比较、逻辑

#include<iostream>
using namespace std;

int main()
{
	/*算术--取模运算
	1、只有整型变量可以进行取模运算
	2、两整数相除求余数
	*/
	cout << 10 % 3 << endl;
	cout << 3 % 10 << endl;
	//cout << 3.14 % 2 << endl;		//error
	cout << "-----------------------------------------------" << endl;

	/*逻辑运算
	逻辑运算中，非0值均为true，输出显示为1；0值为false，输出显示为0
	*/

	//与运算 &&
	int a = 10;
	int b = 10;
	cout << (a && b) << endl;

	b = 0;
	cout << (a && b) << endl;

	a = 0;
	cout << (a && b) << endl;

	//或运算 ||
	a = 10;
	cout << (a || b) << endl;

	a = 0;
	cout << (a || b) << endl;

	//非运算 !
	a = 10;
	cout << !a << endl;
	cout << !!a << endl;
	cout << "-----------------------------------------------" << endl;


	/*三目运算
		a. 作用：通过三目运算符实现简单的判断
		b. 语法：表达式1(逻辑运算/比较运算) ? 表达式2 ：表达式3
		c. 解释：
		如果表达式1的值为真，执行表达式2，并返回表达式2的结果；
		如果表达式1的值为假，执行表达式3，并返回表达式3的结果。
	*/
	a = 10;
	b = 5;
	int c = 0;
	c = a > b ? a : b;
	cout << c << endl;

	c = a < b ? a : b;
	cout << c << endl;

	c = a ? a : b;
	cout << c << endl;
	c = b ? a : b;
	cout << c << endl;

	return 0;
}