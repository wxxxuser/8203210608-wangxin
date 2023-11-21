#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "输入a和b：";
	cin >> a >> b;
	if(a < b){
		int t = a;
		a = b;
		b = t;
	}
	int q = a, r = b;
	while(r != 0){
		int t = q % r; 
		q = r;
		r = t;
	}
	cout << "a和b的最大公约数为" << q << " 最小公倍数为" << a * b / q << endl;
}
