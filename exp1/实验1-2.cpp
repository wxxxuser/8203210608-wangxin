#include <iostream>
using namespace std;

#define PI 3.14

int main()
{
	float radius;
	float height;

	cout << "������Բ׶�׵İ뾶��׶�ߣ�" << endl;
	cin >> radius >> height;

	float volumn = 1.0 / 3 * PI * radius * radius * height;

	cout << "Բ׶�����Ϊ��" << volumn << endl;
	return 0;
}
