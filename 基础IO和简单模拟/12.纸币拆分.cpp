#include <iostream>
using namespace std;

/*
 * 核心思路：
 * 1. 贪心算法：优先使用大面额纸币，才能使总张数最少
 * 2. 按面额从大到小（100→50→10→5→2→1）依次计算每种面额需要几张
 * 3. n / bills[i] 得到当前面额的张数，n % bills[i] 得到剩余金额
 * 4. 多组输入，每组独立计算并输出
 */
int main() {
    int n;
    int bills[] = {100, 50, 10, 5, 2, 1};  // 面额从大到小排列
    while (cin >> n) {
        int count = 0;  // 纸币总张数
        for (int i = 0; i < 6; i++) {
            count += n / bills[i];  // 当前面额需要几张
            n %= bills[i];          // 剩余金额继续用小面额凑
        }
        cout << count << endl;
    }
    return 0;
}
