//2020-1-2 by kid
//C���Է����ַ�����C-style)

#include<cstring>			//for the strlen() function
#include<iostream>
using namespace std;

int main()
{
	/*C-style �ַ��� ����һ����������ʣ��Կ��ַ�"\0"��β����ASCII��Ϊ0����������ַ����Ľ�β
	*/
	char dog[8] = { 'd','o','g',' ',' ',' ','s' };         //char���飬�������ַ���
	char cat[8] = { 'c','a','t','\0',' ',' ','s' };        //char���飬�����ַ���
	cout << dog << endl;		//��� 's'
	cout << cat << endl;		//�����'s'
	cout << dog[6] << endl;		//��� 's'
	cout << cat[6] << endl;		//���'s'

	char fish[] = "bubble";             //C-style string,��˫���������ַ�������ʽ�İ�����β�Ŀ��ַ�
	cout << fish << endl;               //��ȷ���洢�ַ���������������ʱ�������˽���β�Ŀ��ַ���������
	cout << "\'" << fish[5] << "\'" << endl;         //�������ֽڿɶ���Ϊ'e'
	cout << "\'" << fish[6] << "\'" << endl;         //���߸��ֽڿɶ���Ϊ���ַ�
	cout << "\'" << fish[7] << "\'" << endl;         //�ڰ˸��ֽڲ��ɶ�������
	char ch = 's';			//�Ϸ�
	//char ch="s";			//���Ϸ� "s"���������ַ����ַ�����'s'��'\0'
	cout << "---------------------------------------------" << endl;

	/*���ַ����洢�������У�����1���������ʼ��Ϊ�ַ�������
						  ����2�����̻��ļ�������뵽������,����������
	1��strlen()��ȷ���ַ������ȣ�ֻ����ɼ����ַ�����������ַ�'\0',������洢�ַ���ʱ�����鳤�Ȳ�С��strlen()+1
	2������ʹ��'\0'�ض��ַ���

	*/
	const int size = 15;
	char name1[size] = "C++666";		//����1���������ʼ��Ϊ�ַ�������
	char name2[size];

	cout << "Hi I'm " << name1 << endl;
	cout << "what's your name?" << endl;
	//cin.getline(name2, size);
	cin >> name2;						//����2���������룬���������⣺
	//question1:cinʹ�ÿհ�(�ո��Ʊ���ͻ��з�)��ȷ���ַ����Ľ���λ�ã�����ζ��cinֻ�ܶ�ȡһ�����ʣ��������"kid computer"�����
	//solve1:�����е����� getline()��get()
	//question2��������ַ������ܱ�Ŀ�����鳤
	//solve2:string�����
	cout << "name1 has " << strlen(name1) << " letters" << endl;
	cout << "name2 has " << strlen(name2) << " letters" << endl;		//strlen()���ش洢���������ַ����ĳ��ȣ����������鱾��ĳ��ȡ�
	cout << "name1 has " << sizeof(name1) << " bytes" << endl;			//sizeof()�����������ĳ��ȣ�15���ֽ�
	cout << "name2 has " << sizeof(name2) << " bytes" << endl;

	//ʹ��'\0'�ض��ַ���
	name1[3] = '\0';
	cout << "Here are the first 3 character of name1:" << name1 << endl;
	cout << "---------------------------------------------" << endl;

	/*�����е����룺getline()��get()
	��������������ȡһ�����룬ֱ�����ﻻ�з������getline()���������з���get()�����з�����������������
	*/

	//getline():����cin.getline(),һ������������,��һ������ʹ�����洢�����е���������ƣ�
	//          �ڶ���������Ҫ��ȡ���ַ���������������Ϊ20,����ȡ19���ַ������µĿռ��Զ���ӿ��ַ�
	//          cin.getline()ʵ��������������,cin.getline(����ֵ���ַ���b,���ܸ���10,�����ַ�'A')
	//          �������������������ַ�ʡ��ʱ,ϵͳĬ��Ϊ'\0'
	//          ����12A12,��ᷢ��ֻ�����12
	const int max = 20;
	char name[max];
	char dessert[max];
	cout << "Enter your name:\n";
	cin.get();							//�������յ�41������Ļ��з��������Ӱ�쵽65�е����룬��41��ʹ��cin.getline()�Ͳ���cin.get()��
	cin.getline(name, max);
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, max);			//����Ͳ������ջ��з�����Ϊcin.getline()�Ὣ���з��������ÿ��ַ����滻�з�
	cout << "I have some delicious " << dessert << " for you," << name << endl;

	//get():����cin.get().����û�в��������߸�cin.getline()һ����������
	//      cin.get()�����з����������������
	//cin.get(name,max);
	//cin.get();
	//cin.get(dessert,max);

	return 0;
}