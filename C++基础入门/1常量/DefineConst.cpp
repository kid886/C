//2020-1-1  by kid
//C++�еĳ��������ɸ��ĵ����ݡ����ֶ��巽ʽ���곣����const���α���

#include<iostream>
using namespace std;

//1���곣��
#define week 7

int main()
{
	cout << "һ���ܹ���" << week << "��\n";
	//week =8; //�����곣�������޸�

	//2��const���α���
	const int month = 12;
	cout << "һ���ܹ���" << month << "��\n";
	//month=24;//�������������޸�

	return 0;
}