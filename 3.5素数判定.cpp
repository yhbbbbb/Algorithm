#include <iostream>
using namespace std;

int main() {
    int x, y, i, j, num, flag;

    // 多组输入，当 x 和 y 都为 0 时结束
    while (cin >> x >> y && (x != 0 || y != 0)) {
        flag = 1;  // 标记：1 表示全部是素数，0 表示存在非素数

        // 遍历区间 [x, y] 中的每一个 i
        for (i = x; i <= y && flag; i++) {
            num = i * i + i + 41;  // 计算 i² + i + 41

            // 判断 num 是否为素数：从 2 开始试除
            for (j = 2; j < num; j++) {
                if (num % j == 0) {  // 能被整除，说明不是素数
                    flag = 0;
                    break;
                }
            }
        }

        // 全部都是素数则输出 OK，否则输出 Sorry
        if (flag) cout << "OK" << endl;
        else cout << "Sorry" << endl;
    }
    return 0;
}
