#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a;
	cout << "输入a：";
	cin >> a;
	double now = a;
	double next = 1.0/2 * (now + a/now);
	while(fabs(now - next) >= 10e-5){
		now = next;
		next = 1.0/2 * (now + a/now);
	}  
	cout << "a的平方根估算为：" << next;
}
