//2020-1-2 by kid
//C语言风格的字符串（C-style)

#include<cstring>			//for the strlen() function
#include<iostream>
using namespace std;

int main()
{
	/*C-style 字符串 具有一种特殊的性质：以空字符"\0"结尾，其ASCII码为0，用来标记字符串的结尾
	*/
	char dog[8] = { 'd','o','g',' ',' ',' ','s' };         //char数组，但不是字符串
	char cat[8] = { 'c','a','t','\0',' ',' ','s' };        //char数组，且是字符串
	cout << dog << endl;		//输出 's'
	cout << cat << endl;		//不输出's'
	cout << dog[6] << endl;		//输出 's'
	cout << cat[6] << endl;		//输出's'

	char fish[] = "bubble";             //C-style string,用双引号栝起字符串，隐式的包括结尾的空字符
	cout << fish << endl;               //在确定存储字符串所需的最短数组时，别忘了将结尾的空字符计算在内
	cout << "\'" << fish[5] << "\'" << endl;         //第六个字节可读，为'e'
	cout << "\'" << fish[6] << "\'" << endl;         //第七个字节可读，为空字符
	cout << "\'" << fish[7] << "\'" << endl;         //第八个字节不可读，出错
	char ch = 's';			//合法
	//char ch="s";			//不合法 "s"包含两个字符的字符串：'s'和'\0'
	cout << "---------------------------------------------" << endl;

	/*将字符串存储到数组中：方法1、将数组初始化为字符串常量
						  方法2、键盘或文件输入读入到数组中,有两个问题
	1、strlen()：确定字符串长度，只计算可见的字符，不计算空字符'\0',用数组存储字符串时，数组长度不小于strlen()+1
	2、可以使用'\0'截短字符串

	*/
	const int size = 15;
	char name1[size] = "C++666";		//方法1、将数组初始化为字符串常量
	char name2[size];

	cout << "Hi I'm " << name1 << endl;
	cout << "what's your name?" << endl;
	//cin.getline(name2, size);
	cin >> name2;						//方法2、键盘输入，有两个问题：
	//question1:cin使用空白(空格，制表符和换行符)来确定字符串的结束位置，这意味着cin只能读取一个单词，如果输入"kid computer"会出错
	//solve1:面向行的输入 getline()和get()
	//question2：输入的字符串可能比目标数组长
	//solve2:string类对象
	cout << "name1 has " << strlen(name1) << " letters" << endl;
	cout << "name2 has " << strlen(name2) << " letters" << endl;		//strlen()返回存储在数组中字符串的长度，而不是数组本身的长度。
	cout << "name1 has " << sizeof(name1) << " bytes" << endl;			//sizeof()求出整个数组的长度，15个字节
	cout << "name2 has " << sizeof(name2) << " bytes" << endl;

	//使用'\0'截短字符串
	name1[3] = '\0';
	cout << "Here are the first 3 character of name1:" << name1 << endl;
	cout << "---------------------------------------------" << endl;

	/*面向行的输入：getline()、get()
	这两个函数都读取一行输入，直到到达换行符。随后getline()将丢弃换行符，get()将换行符保留在输入序列中
	*/

	//getline():调用cin.getline(),一般有两个参数,第一个参数使用俩存储输入行的数组的名称；
	//          第二个参数是要读取的字符数，如果这个参数为20,最多读取19个字符，余下的空间自动添加空字符
	//          cin.getline()实际上有三个参数,cin.getline(被赋值的字符串b,接受个数10,结束字符'A')
	//          当第三个参数即结束字符省略时,系统默认为'\0'
	//          输入12A12,你会发现只会输出12
	const int max = 20;
	char name[max];
	char dessert[max];
	cout << "Enter your name:\n";
	cin.get();							//用来吸收第41行输入的换行符，否则会影响到65行的输入，第41行使用cin.getline()就不用cin.get()了
	cin.getline(name, max);
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, max);			//这里就不用吸收换行符，因为cin.getline()会将换行符丢弃且用空字符代替换行符
	cout << "I have some delicious " << dessert << " for you," << name << endl;

	//get():调用cin.get().可以没有参数，或者跟cin.getline()一样三个参数
	//      cin.get()将换行符留在了输入队列中
	//cin.get(name,max);
	//cin.get();
	//cin.get(dessert,max);

	return 0;
}