#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "ÇëÊäÈëx£º";
	cin >> x;
	if(x > 0 && x < 1)
		y = 3 - 2 * x;
	else if(x >= 1 && x < 5)
		y = 2 / (4 * x) + 1;
	else if(x >= 5 && x < 10)
		y = x * x;
	else{
		cout << "³¬³ö·¶Î§£¡" << endl;
		return 0;
	}
	
	cout << "y = " << y << endl;
	return 0;
}
