#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float h;
	float s;
	cout << "�����뻪���¶ȣ�";
	cin >> h;
	s = (h - 32) / 1.8;
	cout << "ת��Ϊ�����¶�Ϊ��" << fixed << setprecision(2) << s;
	return 0;
}
