//2020-1-11 by kid
//switch��֧����ʹ��

#include "enum.h"
#include <iostream>
using namespace std;

int main()
{
	/*	switch(integer-expression)
		{
			case label1��ִ�����;break;
			case label2��ִ�����;break;
			.
			default:ִ�����;break;
		}
	1��integer-expression��label ���������ͣ��ַ��ͣ�ö����
	2��û��break,����������ִ��������ǩ��Ӧ�����
	*/

	//�����Ӱ���� ---------����ʾ��
	//100 ~ 90   ����
	// 80 ~ 70   �ǳ���
	// 60 ~ 50   һ��
	// 50������ ��Ƭ
	int score = 0;

	cout << "�����Ӱ���(0~10):" << endl;
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

	//��ĸa\b\c\dСдת��д ---------�ַ���ʾ��
	char ch = 'a';
	cout << "������Сд��ĸa~d:" << endl;
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

	//һ��������ƥ�� -------ö����ʾ��
	int code = 0;
	cout << "����������(1~7):" << endl;
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

	/*ö���͵�ע������
	1��ö�����ñ�ʶ����ʾ�����ͳ�������
	2��Ĭ������Ǵ�0��ʼ�����ε���
	3��������Ϊ����ÿ��ö�ٳ�����Ӧ������ֵ,���ú�������ε���                                                 
	4������ֱ�Ӱ�����ֵ����ö�ٱ���
	5��ö�ٳ��������ַ�������Ҳ�����ַ���������ʹ��ʱ��Ҫ�ӵ���˫����
	*/
	cout << "Ĭ����ÿ��ö�ٳ�����ʾ��ֵ��" << endl;
	cout << Monday << "\t" << Tuesday << "\t" << Wednesday << "\t" << Thursday << "\t" << Friday << endl;
	cout << "��Ϊ���õ�ö�ٳ�����ʾ��ֵ��" << endl;
	cout << red << "\t" << yellow << "\t" << black << "\t" << blue << "\t" << white << "\t" << orange << "\t" << purple << "\t" << pink << "\t" << endl;

	//4
	color cr = red;
	cout << cr << endl;
	//cr =2;	//	error
	return 0;
}