//2020-1-2 by kid
//C++��string��

#include<cstring>			//C-style string library
#include<string>			//make string class available
#include<iostream>
using namespace std;

int main()
{
	/**
	1.����ʹ��C-style�ַ�������ʼ��string����
	2.����ʹ��cin������������洢��string������
	3.����ʹ��cout����ʾstring����
	4.����ʹ�������ʾ�������ʴ洢��string�����е��ַ�
	*/
	string str1;
	string str2 = "computer kid";
	cout << "Enter your name(only one word):" << endl;
	cin >> str1;		//str1����������һ������Ϊ0��string���󣬻���������Զ�����str1�ĳ���
						//����ʹ��������ȣ����ӷ��㣬��ȫ
						//cin ֻ������һ������

	cout << "str1=" << str1 << endl;
	cout << "str2=" << str2 << endl;
	cout << "str1[3]" << str1[3] << endl;
	cout << "str2[3]" << str2[3] << endl;
	//char������Ϊһ�����ڴ洢һ���ַ�����char�洢��Ԫ
	//string�������һ����ʾ�ַ�����ʵ��
	cout << "---------------------------------------------" << endl;

	/*string����ĸ��ơ�ƴ�Ӻ͸���
	���ܽ�һ�����鸳����һ�����飬�����Խ�һ��string���󸳸���һ��string����
	*/
	string str3 = "world";
	string str4, str5;
	str4 = str3;				//��ֵ
	cout << "str4=" << str4 << endl;

	str5 = str3 + str4;			//ƴ��
	cout << "str5=" << str5 << endl;

	str5 += str4;				//����
	cout << "str5=" << str5 << endl;

	//��C-style�ַ����ĸ��ƣ����ӣ��󳤶Ƚ��бȽ�
	char charr1[20] = "hello";
	char charr2[20];

	//����
	strcpy_s(charr2, charr1);				//copy charr2 to charr1������Ŀ�������С���޷��洢ָ����Ϣ��Σ��
	cout << "charr2=" << charr2 << endl;	//string������Զ�������С�Ĺ��ܣ��Ӷ��ܱ����������ⷢ��

	//����
	strcat_s(charr2, "world");				//add "world" to end of charr1������Ŀ�������С���޷��洢ָ����Ϣ��Σ��
	cout << "charr2=" << charr2 << endl;

	//��
	cout << "str5 length:" << str5.length() << endl;
	cout << "str5 length:" << str5.size() << endl;
	cout << "charr1 length:" << strlen(charr1) << endl;
	cout << "---------------------------------------------" << endl;

	/*string��� I/O   ��������
	*/
	char charr3[20];
	string str6;

	cin.get();		//���յ�20�еĻ��з�
	cout << "Enter charr3:\n";
	cin.getline(charr3, 20);		//C-style�İ�������

	cout << "Enter str6:\n";
	getline(cin, str6);				//string��İ�������

	cout << "charr3=" << charr3 << " of " << strlen(charr3) << " letters.\n";
	cout << "str6=" << str6 << " of " << str6.size() << " letters.\n";

	return 0;
}