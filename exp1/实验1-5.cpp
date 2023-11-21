#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float h;
	float s;
	cout << "请输入华氏温度：";
	cin >> h;
	s = (h - 32) / 1.8;
	cout << "转换为摄氏温度为：" << fixed << setprecision(2) << s;
	return 0;
}
