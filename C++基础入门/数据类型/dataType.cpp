//2020-1-1 by kid
//C++�������ͣ����͡������͡��ַ��͡������͡�sizeof()����

#include<iostream>
using namespace std;

int main()
{
	//������short
	short a1 = 32768;		//2���ֽڣ�-2^15~2^15-1
	short a2 = 32767;
	short a3 = -32768;
	cout << "shor(������)a1=" << a1 << "\n";
	cout << "shor(������)a2=" << a2 << "\n";
	cout << "shor(������)a3=" << a3 << "\n";
	cout << "shor(������)ռ" << sizeof(short) << "�ֽ�\n";
	cout << "----------------------------------------------------" << endl;

	//����int
	int b1 = 32768;		//4���ֽڣ�-2^31~2^31-1
	int b2 = 32767;
	int b3 = 1000000000000000;
	cout << "int(����)b1=" << b1 << "\n";
	cout << "int(����)b2=" << b2 << "\n";
	cout << "int(����)b3=" << b3 << "\n";
	cout << "int(����)ռ" << sizeof(int) << "�ֽ�\n";
	cout << "----------------------------------------------------" << endl;

	//������long int
	long int c1 = 32768;		//4���ֽڣ�-2^31~2^31-1
	long int c2 = 32767;
	long int c3 = 1000000000000000;
	cout << "long int(������)c1=" << c1 << "\n";
	cout << "long int(������)c2=" << c2 << "\n";
	cout << "long int(������)c3=" << c3 << "\n";
	cout << "long int(������)ռ" << sizeof(long int) << "�ֽ�\n";
	cout << "----------------------------------------------------" << endl;

	//��������long long int
	long long int d1 = 32768;		//8���ֽڣ�-2^63~2^63-1
	long long int d2 = 32767;
	long long int d3 = 1000000000000000;
	cout << "long long int(��������)d1=" << d1 << "\n";
	cout << "long long int(��������)d2=" << d2 << "\n";
	cout << "long long int(��������)d3=" << d3 << "\n";
	cout << "long long int(��������)ռ" << sizeof(long long int) << "�ֽ�\n";
	cout << "----------------------------------------------------" << endl;

	//������float
	float f1 = 3.141592653589f;     //4���ֽ�  7λ��Ч����
	cout << "float(��������)f1=" << f1 << endl;
	cout << "float(��������)ռ" << sizeof(float) << "�ֽ�\n";
	cout << "----------------------------------------------------" << endl;

	//˫����double
	double f2 = 3.141592653589;    //8���ֽ�  15λ��Ч����
	cout << "double(˫������)f2=" << f2 << endl;
	cout << "double(˫������)ռ" << sizeof(double) << "�ֽ�\n";
	cout << "----------------------------------------------------" << endl;

	//�ַ���char
	char ch = 'a';               //1���ֽ� ������ ��Ӧ��7λASCIIָ������������ת��
	int ascii = ch + 1;
	cout << "char(�ַ���)ch=" << ch << endl;
	cout << "int(����)ch=" << int(ch) << endl;
	cout << "int(����)ascii=" << ascii << endl;
	cout << "char(�ַ���)ascii=" << char(ascii) << endl;
	cout << "char(�ַ���)ռ" << sizeof(char) << "�ֽ�\n";
	cout << "----------------------------------------------------" << endl;

	//������bool
	bool flag1 = true;         //1���ֽڣ�ֻ������ֵ��true=1��false=0
	bool flag2 = false;
	cout << "bool(������)flag1=" << flag1 << endl;
	cout << "bool(������)flag2=" << flag2 << endl;
	cout << "bool(������)ռ" << sizeof(bool) << "�ֽ�\n";
	cout << "----------------------------------------------------" << endl;

	return 0;
}