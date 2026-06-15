#include <iostream>
using namespace std;

int main(){
    char op;
    int a, b;
    while(cin >> op >> a >> b)
    {
        if(op == '+') cout << a + b << endl;
        else if(op == '-') cout << a - b << endl;
        else if(op == '*') cout << a * b << endl;
        else if(op == '/')
        {
            if(a % b == 0) cout << a / b << endl;
            else printf("%.2f\n", (double)a / b);
        }
    }
    return 0;
}
