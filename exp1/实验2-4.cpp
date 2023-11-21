#include<iostream>  
using namespace std;  
  
int main()  
{  
    double a, b;  
    char opr;  
    cout << "请输入算术表达式（用空格分隔）：";  
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
                cout << "除数不能为0！" << endl;  
                return 0;  
            }   
            cout << a / b << endl;  
            break;  
        case '%':  
            if(int(a) != a || int(b) != b){  
                cout << "a和b必须都为整数！" << endl;  
                return 0;  
            }  
            cout << int(a) % int(b) << endl;  
            break;  
        default:  
            cout << "运算符非法！" << endl;         
    }  
      
    return 0;   
}  
