#include<iostream>  
using namespace std;  
  
int main()  
{  
    double a, b;  
    char opr;  
    cout << "�������������ʽ���ÿո�ָ�����";  
    cin >> a >> opr >> b;  
      
    switch(opr){  
        case '+':  
            cout << a + b << endl;  
            break;  
        case '-':  
            cout << a - b << endl;  
            break;  
        case '*':  
            cout << a * b << endl;  
            break;  
        case '/':  
            if(b == 0){  
                cout << "��������Ϊ0��" << endl;  
                return 0;  
            }   
            cout << a / b << endl;  
            break;  
        case '%':  
            if(int(a) != a || int(b) != b){  
                cout << "a��b���붼Ϊ������" << endl;  
                return 0;  
            }  
            cout << int(a) % int(b) << endl;  
            break;  
        default:  
            cout << "������Ƿ���" << endl;         
    }  
      
    return 0;   
}  
