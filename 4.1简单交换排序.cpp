#include <iostream>
using namespace std;

int main() {
    int n, temp[100];

    // 多组输入，n 为 0 时结束
    while (cin >> n && n) {
        // 读入 n 个数
        for (int i = 0; i < n; i++)
            cin >> temp[i];

        // 冒泡排序：每轮将最大的数"冒泡"到末尾
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (temp[j] > temp[j + 1]) {
                    // 交换相邻两个元素
                    int t = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = t;
                }

        // 输出排序结果，数字间用空格分隔
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << temp[i];
        }
        cout << endl;
    }
    return 0;
}
