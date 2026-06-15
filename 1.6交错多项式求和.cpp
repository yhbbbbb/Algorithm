#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    double sum;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        double sum = 0.0;
        for(int j = 1; j <= n; j++)
        {
            if(j % 2 == 1) sum += 1.0 / j;
            else sum -= 1.0 / j;
        }
        cout.precision(2);
        cout <<fixed << sum << endl;
    }
    
    return 0;
}