#include <iostream>
using namespace std;

// 辗转相除法（欧几里得算法）求最大公约数
// 原理：gcd(a, b) = gcd(b, a % b)，当 b 为 0 时，a 就是最大公约数
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << gcd(a, b) << endl;
    }
    return 0;
}
