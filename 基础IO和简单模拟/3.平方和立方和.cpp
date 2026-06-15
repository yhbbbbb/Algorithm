#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,temp;
    while(cin >> a >> b){
        if(a > b){temp = a; a = b; b = temp;}
        int square = 0,cube = 0;
        for(;a <=b; a++){
            if(a%2 == 0) square += a * a;
            else cube += a*a*a;
        }
        cout << square <<" "<< cube <<endl;
    }
}