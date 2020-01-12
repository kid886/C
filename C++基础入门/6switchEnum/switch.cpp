//2020-1-11 by kid
//switch分支语句的使用

#include "enum.h"
#include <iostream>
using namespace std;

int main()
{
	/*	switch(integer-expression)
		{
			case label1：执行语句;break;
			case label2：执行语句;break;
			.
			default:执行语句;break;
		}
	1、integer-expression和label 必须是整型，字符型，枚举型
	2、没有break,将继续向下执行其他标签对应的语句
	*/

	//请给电影评分 ---------整型示例
	//100 ~ 90   经典
	// 80 ~ 70   非常好
	// 60 ~ 50   一般
	// 50分以下 烂片
	int score = 0;

	cout << "请给电影打分(0~10):" << endl;
	cin >> score;
	while (score > 0)
	{
		switch (score * 10)
		{
		case 100:
		case 90:
			cout << "perfect!" << endl;
			break;
		case 80:
		case 70:
			cout << "good!" << endl;
			break;
		case 60:
			cout << "just so so!" << endl;
			break;
		default:
			cout << "bad!" << endl;
		}
		cin >> score;
	}

	cout << "---------------------------------------" << endl;

	//字母a\b\c\d小写转大写 ---------字符型示例
	char ch = 'a';
	cout << "请输入小写字母a~d:" << endl;
	cin >> ch;
	while (ch >= 'a')
	{
		switch (ch)
		{
		case 'a':
			cout << "'a'-->" << char('a' - 'a' + 'A') << endl;
			break;
		case 'b':
			cout << "'b'-->" << char('b' - 'a' + 'A') << endl;
			break;
		case 'c':
			cout << "'c'-->" << char('c' - 'a' + 'A') << endl;
			break;
		case 'd':
			cout << "'d'-->" << char('d' - 'a' + 'A') << endl;
			break;
		default:
			cout << "error!" << endl;
		}
		cin >> ch;
	}
	cout << "---------------------------------------" << endl;

	//一周与数字匹配 -------枚举型示例
	int code = 0;
	cout << "请输入数字(1~7):" << endl;
	cin >> code;
	while (code-1 >= Monday && code-1 <= Sunday)
	{
		switch (code-1)
		{
		case Monday:
			cout << "Today is Monday!" << endl;
			break;
		case Tuesday:
			cout << "Today is Tuesday!" << endl;
			break;
		case Wednesday:
			cout << "Today is Wednesday!" << endl;
			break;
		case Thursday:
			cout << "Today is Thursday!" << endl;
			break;
		case Friday:
			cout << "Today is Friday!" << endl;
			break;
		case Saturday:
			cout << "Today is Saturday!" << endl;
			break;
		case Sunday:
			cout << "Today is Sunday!" << endl;
			break;
		default:
			cout << "error!" << endl;
			break;
		}
		cin >> code;
	}
	cout << "---------------------------------------" << endl;

	/*枚举型的注意事项
	1、枚举是用标识符表示的整型常数集合
	2、默认情况是从0开始，依次递增
	3、可以人为设置每个枚举常量对应的整数值,设置后继续依次递增                                                 
	4、不能直接把整数值赋给枚举变量
	5、枚举常量不是字符常量，也不是字符串常量，使用时不要加单，双引号
	*/
	cout << "默认下每个枚举常量表示的值：" << endl;
	cout << Monday << "\t" << Tuesday << "\t" << Wednesday << "\t" << Thursday << "\t" << Friday << endl;
	cout << "认为设置的枚举常量表示的值：" << endl;
	cout << red << "\t" << yellow << "\t" << black << "\t" << blue << "\t" << white << "\t" << orange << "\t" << purple << "\t" << pink << "\t" << endl;

	//4
	color cr = red;
	cout << cr << endl;
	//cr =2;	//	error
	return 0;
}