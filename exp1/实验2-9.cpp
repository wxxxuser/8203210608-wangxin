#include<iostream>
using namespace std;

int main()
{
	int today = 2;
	int all = 0;
	int day = 0;
	do{
		all += today;
		today *= 2;
		day++;
	}while(all + today <= 100);
	
	cout <<"共买了" << all << "个苹果" << endl;
	cout << "买了" << day << "天" << endl; 
	cout << "平均每天花费为：" << all * 0.8 / day << endl; 
}
