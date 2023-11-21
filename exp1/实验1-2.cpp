#include <iostream>
using namespace std;

#define PI 3.14

int main()
{
	float radius;
	float height;

	cout << "请输入圆锥底的半径和锥高：" << endl;
	cin >> radius >> height;

	float volumn = 1.0 / 3 * PI * radius * radius * height;

	cout << "圆锥的体积为：" << volumn << endl;
	return 0;
}
