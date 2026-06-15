#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // 多组输入，每次读入一整行
    while (getline(cin, str)) {
        // 将第一个字符转为大写
        str[0] = toupper(str[0]);

        // 遍历字符串，找到空格后的字符并转为大写
        for (int i = 0; i < str.size(); i++) {
            // 如果当前是空格，且后面还有字符，则将下一个字符转为大写
            if (str[i] == ' ' && i + 1 < str.size())
                str[i + 1] = toupper(str[i + 1]);
        }

        cout << str << endl;
    }
    return 0;
}
