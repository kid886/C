//2020-1-2 by kid
//C++的string类

#include<cstring>			//C-style string library
#include<string>			//make string class available
#include<iostream>
using namespace std;

int main()
{
	/**
	1.可以使用C-style字符串来初始化string对象
	2.可以使用cin来将键盘输入存储到string对象中
	3.可以使用cout来显示string对象
	4.可以使用数组表示法来访问存储在string对象中的字符
	*/
	string str1;
	string str2 = "computer kid";
	cout << "Enter your name(only one word):" << endl;
	cin >> str1;		//str1的声明创建一个长度为0的string对象，会根据输入自动调整str1的长度
						//这与使用数组相比，更加方便，安全
						//cin 只能输入一个单词

	cout << "str1=" << str1 << endl;
	cout << "str2=" << str2 << endl;
	cout << "str1[3]" << str1[3] << endl;
	cout << "str2[3]" << str2[3] << endl;
	//char数组视为一组用于存储一个字符串的char存储单元
	//string类变量是一个表示字符串的实体
	cout << "---------------------------------------------" << endl;

	/*string对象的复制、拼接和附加
	不能将一个数组赋给另一个数组，但可以将一个string对象赋给另一个string对象
	*/
	string str3 = "world";
	string str4, str5;
	str4 = str3;				//赋值
	cout << "str4=" << str4 << endl;

	str5 = str3 + str4;			//拼接
	cout << "str5=" << str5 << endl;

	str5 += str4;				//附加
	cout << "str5=" << str5 << endl;

	//与C-style字符串的复制，附加，求长度进行比较
	char charr1[20] = "hello";
	char charr2[20];

	//复制
	strcpy_s(charr2, charr1);				//copy charr2 to charr1，存在目标数组过小，无法存储指定信息的危险
	cout << "charr2=" << charr2 << endl;	//string类具有自动调整大小的功能，从而能避免这种问题发生

	//附加
	strcat_s(charr2, "world");				//add "world" to end of charr1，存在目标数组过小，无法存储指定信息的危险
	cout << "charr2=" << charr2 << endl;

	//求长
	cout << "str5 length:" << str5.length() << endl;
	cout << "str5 length:" << str5.size() << endl;
	cout << "charr1 length:" << strlen(charr1) << endl;
	cout << "---------------------------------------------" << endl;

	/*string类的 I/O   按行输入
	*/
	char charr3[20];
	string str6;

	cin.get();		//吸收第20行的换行符
	cout << "Enter charr3:\n";
	cin.getline(charr3, 20);		//C-style的按行输入

	cout << "Enter str6:\n";
	getline(cin, str6);				//string类的按行输入

	cout << "charr3=" << charr3 << " of " << strlen(charr3) << " letters.\n";
	cout << "str6=" << str6 << " of " << str6.size() << " letters.\n";

	return 0;
}