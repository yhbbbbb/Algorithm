#include <iostream>
using namespace std;

int main() {
    int n, m, t[100], k;

    // 多组输入：n 是数组长度，m 是要插入的数；都为 0 时结束
    while (cin >> n >> m && n && m) {
        // 读入已排序的 n 个数
        for (int i = 0; i < n; i++)
            cin >> t[i];

        // 将 m 放到数组末尾
        t[n] = m;

        // 冒泡排序：将新插入的数"冒泡"到正确位置
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= n - i - 1; j++)
                if (t[j] > t[j + 1]) {
                    k = t[j];
                    t[j] = t[j + 1];
                    t[j + 1] = k;
                }

        // 输出插入后的有序序列
        for (int i = 0; i <= n; i++) {
            if (i > 0) cout << " ";
            cout << t[i];
        }
        cout << endl;
    }
    return 0;
}
