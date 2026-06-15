#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n)
    {
        long long product = 1;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x % 2 != 0) product *= x;
        }
        cout << product << endl;
    }
    return 0;
}
