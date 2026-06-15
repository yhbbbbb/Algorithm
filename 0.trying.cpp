#include<bits/stdc++.h>

using namespace std;

int main(){
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y,m,d,n;

    while(cin >> y){
        char sep;
        cin >> sep >> m >> sep >> d;
        n = 0;

        if(y %400 == 0 || (y%4 == 0 && y%100 != 0))
            day[1] = 29;
        else
            day[1] = 28;

        for(int i = 0;i < m-1;i++){
            n+=day[i];
        }
        n += d;
        cout << d << endl;
    }

    return 0;
}