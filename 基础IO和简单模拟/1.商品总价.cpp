#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    double x, y, sum = 0.0;
    while (cin >> s >> x >> y){
        sum += x * y;
    }
    //保留两位小数输出
    cout.precision(2);
    cout << fixed << sum << endl;
    return 0;
}