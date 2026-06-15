#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int m, n;

    // 多组输入：m 行 n 列，都为 0 时结束
    while (cin >> m >> n && m && n) {
        // 创建 m×n 的矩阵
        vector<vector<int>> mat(m, vector<int>(n));
        int row = 0, col = 0, maxVal = 0;

        // 读入矩阵元素，同时查找绝对值最大的元素
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];

                // 如果当前元素的绝对值更大，更新记录
                if (abs(mat[i][j]) > abs(maxVal)) {
                    maxVal = mat[i][j];  // 记录原值（保留正负号）
                    row = i;             // 记录行号
                    col = j;             // 记录列号
                }
            }
        }

        // 输出：行号、列号（从1开始）和元素值
        cout << row + 1 << " " << col + 1 << " " << maxVal << endl;
    }
    return 0;
}
