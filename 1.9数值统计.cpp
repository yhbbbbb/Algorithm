#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0)
    {
        int neg = 0, zero = 0, pos = 0;
        for(int i = 0; i < n; i++)
        {
            double x;
            cin >> x;
            if(x < 0) neg++;
            else if(x == 0) zero++;
            else pos++;
        }
        cout << neg << " " << zero << " " << pos << endl;
    }
    return 0;
}