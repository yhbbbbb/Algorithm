#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    string str;

    cin >> T;
    cin.ignore();  // 忽略 T 后面的换行符

    while (T--) {
        getline(cin, str);
        int len = str.size();
        int pre = -1;  // 记录上一个空格的位置

        // 遍历字符串，找到每个单词并逆序输出
        for (int i = 0; i <= len; i++) {
            // 遇到空格或字符串末尾，说明找到了一个单词
            if (str[i] == ' ' || i == len) {
                // 从单词末尾往前输出（逆序）
                for (int j = i - 1; j > pre; j--)
                    cout << str[j];

                pre = i;  // 更新上一个空格位置

                // 如果不是最后一个单词，输出空格分隔
                if (i != len) cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
