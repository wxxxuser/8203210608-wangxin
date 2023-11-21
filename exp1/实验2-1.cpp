#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char c;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
	cin >> c;
	if(islower(c))
		cout << char(toupper(c)) << endl;
	else
		cout << c + 1 << endl;
	
	return 0;
}
