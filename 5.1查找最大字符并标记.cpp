#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[100];

    // 多组输入，读入一个字符串
    while (cin >> c) {
        char maxCh = 'A';  // 初始化最大字符为 'A'
        int len = strlen(c);

        // 第一遍遍历：找到最大的字符
        for (int i = 0; i < len; i++)
            if (c[i] > maxCh) maxCh = c[i];

        // 第二遍遍历：输出字符，遇到最大字符后标记 "(max)"
        for (int i = 0; i < len; i++) {
            cout << c[i];
            if (c[i] == maxCh) cout << "(max)";
        }
        cout << endl;
    }
    return 0;
}
