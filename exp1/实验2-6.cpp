#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "����a��b��";
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
	cout << "a��b�����Լ��Ϊ" << q << " ��С������Ϊ" << a * b / q << endl;
}
