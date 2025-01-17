//2020-1-12 by kid
//真的随机数生成，和伪装的随机数

#include<time.h>
#include<iostream>
using namespace std;

int main()
{
	/*C语言中,rand() 是用来产生随机数，但是并不是真真意义上的随机数，是一个伪随机数，
	是根据一个种子数产生的，我们可以称它为种子，为基准以某个递推公式推算出来的一系数，
	当这系列数很大的时候，就符合正态公布，从而相当于产生了随机数，但这不是真正的随机数，
	当计算机正常开机后，这个种子的值是定了的
	*/
	for (int i = 0; i < 3; i++)					//伪随机数，因为时间种子固定，每次运行程序结果都一样
	{
		cout << rand() % 10 << " ";				//10以内的随机数：0~9
		cout << rand() % 90 + 10 << " ";		//10~99
		cout << (rand() % 10) / 10.0 << " ";	//随机生成小数
		cout << endl;
	}
	cout << "----------------------------" << endl;

	/*为了改变这个种子的值，C提供了srand()函数
	如何产生不可预见的随机数种子呢？我们可以利用时间，
	利用函数srand((int)time(NULL))是一种方法，因为每一次运行程序的时间是不同的
	1、首先给srand提供一个随机数种子种子，它是一个int类型
	2、然后调用rand，它会根据提供给srand的种子值返回一个随机数(在0到32767之间)
	3、无论什么时候，都可以给srand()提供一个新的种子，进一步“随机化”rand的值。
	*/
	int t = (int)time(NULL);
	srand(t);
	for (int i = 0; i < 3; i++)					//真随机数，时间种子根据每次运行程序而变，
	{											//每次程序运行会生成不同的随机数
		cout << rand() % 10 << " ";				//10以内的随机数：0~9
		cout << rand() % 90 + 10 << " ";		//10~99
		cout << (rand() % 10) / 10.0 << " ";	//随机生成小数
		cout << endl;
	}
	return 0;
}