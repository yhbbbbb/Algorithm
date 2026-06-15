#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 12;
    double n,sum;
    while(t--){
        cin >> n;
        sum += n;
    }
    cout.precision(2);
    cout <<fixed<< sum/12 <<endl;

    return 0;
}