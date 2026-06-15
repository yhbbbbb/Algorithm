#include <iostream>
using namespace std;

int main() {
    int M, A, B, total;
    cin >> M;  // 测试组数

    while (M--) {
        cin >> A >> B;

        // 求 A 的所有真因子（除自身以外的因子）之和
        total = 1;  // 1 是所有大于 1 的数的因子
        for (int i = 2; i < A; i++)
            if (A % i == 0) total += i;

        // 如果 A 的真因子之和不等于 B，直接判定不是亲和数
        if (total != B) {
            cout << "NO" << endl;
            continue;
        }

        // 再求 B 的所有真因子之和
        total = 1;
        for (int i = 2; i < B; i++)
            if (B % i == 0) total += i;

        // 如果 B 的真因子之和等于 A，则是亲和数
        if (total == A) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
