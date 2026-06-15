#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    int n, len;
    char a[1010];

    // 多组输入：n 是十进制数
    while (cin >> n) {
        len = 0;

        // 用短除法逐位求余，得到的余数倒序就是二进制表示
        while (n > 0) {
            a[len++] = n % 2 + '0';  // 余数转为字符 '0' 或 '1'
            n /= 2;                   // 继续除以 2
        }
        a[len] = '\0';  // 字符串结尾

        // 反转字符串，得到正确的二进制顺序
        reverse(a, a + len);

        cout << a << endl;
    }
    return 0;
}
