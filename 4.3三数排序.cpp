#include <iostream>
using namespace std;

int main() {
    char a, b, c, t;

    // 多组输入，读入三个字符（前面加空格跳过换行符）
    while (cin >> a >> b >> c) {
        // 三次比较交换，确保 a <= b <= c（升序）
        if (a > c) { t = a; a = c; c = t; }  // 保证 c 是最大的
        if (b > c) { t = b; b = c; c = t; }  // 再次保证 c 最大
        if (a > b) { t = a; a = b; b = t; }  // 保证 a <= b

        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
