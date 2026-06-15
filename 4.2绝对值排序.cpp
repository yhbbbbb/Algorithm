#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, num[100];

    // 多组输入
    while (cin >> n) {
        // 读入 n 个数
        for (int i = 0; i < n; i++)
            cin >> num[i];

        // 冒泡排序：按绝对值从大到小排序
        for (int k = 0; k < n; k++)
            for (int j = 0; j < n - k - 1; j++)
                if (abs(num[j]) < abs(num[j + 1])) {
                    // 交换相邻两个元素
                    int t = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = t;
                }

        // 输出排序结果，数字间用空格分隔
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << num[i];
        }
        cout << endl;
    }
    return 0;
}
