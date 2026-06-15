#include <iostream>
using namespace std;

// 辗转相除法求最大公约数
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int T, n, temp, x;
    cin >> T;  // 测试组数

    while (T--) {
        cin >> n >> temp;  // n 个数，先读入第一个数

        // 逐个读入后面的 n-1 个数，不断更新最小公倍数
        for (int i = 1; i < n; i++) {
            cin >> x;
            // 先除再乘，防止溢出：lcm(a, b) = a / gcd(a, b) * b
            temp = temp / gcd(temp, x) * x;
        }

        cout << temp << endl;
    }
    return 0;
}
