#include<iostream>

using namespace std;

int main(){
    int T,x,y,sum;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> x >> y;
        x %= 100;
        y %= 100;
        sum = (x + y) % 100;
        cout << sum << endl;
    }
    return 0;

}