#include <iostream>
using namespace std;

int main() {
    int n, r, x, flag, a[1000];

    // 多组输入：n 是十进制数，r 是目标进制
    while (cin >> n >> r) {
        flag = 0;

        // 如果 n 是负数，先标记，然后取绝对值
        if (n < 0) {
            n = -n;
            flag = 1;
        }

        // 用短除法逐位求余，得到的余数倒序就是 r 进制表示
        x = 0;
        while (n) {
            a[x++] = n % r;  // 余数存入数组
            n /= r;          // 继续除以 r
        }

        // 先输出负号（如果原数是负数）
        if (flag) cout << "-";

        // 逆序输出每一位（余数倒序才是正确顺序）
        while (x--) {
            if (a[x] < 10)
                cout << a[x];           // 0~9 直接输出数字
            else
                cout << (char)(a[x] - 10 + 'A');  // 10~35 输出对应字母 A~Z
        }
        cout << endl;
    }
    return 0;
}
