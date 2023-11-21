#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int letter, digit, space, other;//计数器 
	letter = digit = space = other = 0;
	char c;
	cout << "输入一行字符：";
	while((c = cin.get()) != '\n'){
		if(isalpha(c))
			letter++;
		else if(isdigit(c))
			digit++;
		else if(c == ' ')
			space++;
		else
			other++;
	}
	
	cout << "字母数目：" << letter << endl;
	cout << "数字数目：" << digit << endl;
	cout << "空格数目：" << space << endl;
	cout << "其他字符数目：" << other << endl;
	
	return 0;
}
