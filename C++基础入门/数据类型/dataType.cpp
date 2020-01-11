//2020-1-1 by kid
//C++数据类型：整型、浮点型、字符型、布尔型、sizeof()函数

#include<iostream>
using namespace std;

int main()
{
	//短整型short
	short a1 = 32768;		//2个字节，-2^15~2^15-1
	short a2 = 32767;
	short a3 = -32768;
	cout << "shor(短整型)a1=" << a1 << "\n";
	cout << "shor(短整型)a2=" << a2 << "\n";
	cout << "shor(短整型)a3=" << a3 << "\n";
	cout << "shor(短整型)占" << sizeof(short) << "字节\n";
	cout << "----------------------------------------------------" << endl;

	//整型int
	int b1 = 32768;		//4个字节，-2^31~2^31-1
	int b2 = 32767;
	int b3 = 1000000000000000;
	cout << "int(整型)b1=" << b1 << "\n";
	cout << "int(整型)b2=" << b2 << "\n";
	cout << "int(整型)b3=" << b3 << "\n";
	cout << "int(整型)占" << sizeof(int) << "字节\n";
	cout << "----------------------------------------------------" << endl;

	//长整型long int
	long int c1 = 32768;		//4个字节，-2^31~2^31-1
	long int c2 = 32767;
	long int c3 = 1000000000000000;
	cout << "long int(长整型)c1=" << c1 << "\n";
	cout << "long int(长整型)c2=" << c2 << "\n";
	cout << "long int(长整型)c3=" << c3 << "\n";
	cout << "long int(长整型)占" << sizeof(long int) << "字节\n";
	cout << "----------------------------------------------------" << endl;

	//长长整型long long int
	long long int d1 = 32768;		//8个字节，-2^63~2^63-1
	long long int d2 = 32767;
	long long int d3 = 1000000000000000;
	cout << "long long int(长长整型)d1=" << d1 << "\n";
	cout << "long long int(长长整型)d2=" << d2 << "\n";
	cout << "long long int(长长整型)d3=" << d3 << "\n";
	cout << "long long int(长长整型)占" << sizeof(long long int) << "字节\n";
	cout << "----------------------------------------------------" << endl;

	//单精度float
	float f1 = 3.141592653589f;     //4个字节  7位有效数字
	cout << "float(单精度型)f1=" << f1 << endl;
	cout << "float(单精度型)占" << sizeof(float) << "字节\n";
	cout << "----------------------------------------------------" << endl;

	//双精度double
	double f2 = 3.141592653589;    //8个字节  15位有效数字
	cout << "double(双精度型)f2=" << f2 << endl;
	cout << "double(双精度型)占" << sizeof(double) << "字节\n";
	cout << "----------------------------------------------------" << endl;

	//字符型char
	char ch = 'a';               //1个字节 单引号 对应着7位ASCII指，可以与整型转化
	int ascii = ch + 1;
	cout << "char(字符型)ch=" << ch << endl;
	cout << "int(整型)ch=" << int(ch) << endl;
	cout << "int(整型)ascii=" << ascii << endl;
	cout << "char(字符型)ascii=" << char(ascii) << endl;
	cout << "char(字符型)占" << sizeof(char) << "字节\n";
	cout << "----------------------------------------------------" << endl;

	//布尔型bool
	bool flag1 = true;         //1个字节，只有两个值，true=1；false=0
	bool flag2 = false;
	cout << "bool(布尔型)flag1=" << flag1 << endl;
	cout << "bool(布尔型)flag2=" << flag2 << endl;
	cout << "bool(布尔型)占" << sizeof(bool) << "字节\n";
	cout << "----------------------------------------------------" << endl;

	return 0;
}