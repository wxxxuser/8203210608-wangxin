#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int letter, digit, space, other;//������ 
	letter = digit = space = other = 0;
	char c;
	cout << "����һ���ַ���";
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
	
	cout << "��ĸ��Ŀ��" << letter << endl;
	cout << "������Ŀ��" << digit << endl;
	cout << "�ո���Ŀ��" << space << endl;
	cout << "�����ַ���Ŀ��" << other << endl;
	
	return 0;
}
