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
	
	cout <<"������" << all << "��ƻ��" << endl;
	cout << "����" << day << "��" << endl; 
	cout << "ƽ��ÿ�컨��Ϊ��" << all * 0.8 / day << endl; 
}
