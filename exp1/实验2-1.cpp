#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char c;
	cout << "������һ���ַ���";
	cin >> c;
	if(islower(c))
		cout << char(toupper(c)) << endl;
	else
		cout << c + 1 << endl;
	
	return 0;
}
