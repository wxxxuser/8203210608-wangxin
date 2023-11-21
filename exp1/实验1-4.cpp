#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x = 123.123;
	cout << "实数" << x << "转换为int：" << static_cast<int>(x) << endl; 
	unsigned int testUnint=65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint)<< endl;
	cout << "output in short type:" << static_cast<short>(testUnint)<< endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint)<< endl;
	cout << "output in double type:"<< static_cast<double>(testUnint)<< endl;
	cout << "output in double type:" <<setprecision(4)<< static_cast<double>(testUnint)<< endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint<< endl; //16进制输出
	system("pause");
	cout << "output in Oct unsigned int type:" << oct << testUnint<< endl; //8进制输出
	return 0;
}

