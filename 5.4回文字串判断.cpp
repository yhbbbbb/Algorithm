#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string input;

    cin >> n;
    cin.ignore();  // 忽略 n 后面的换行符

    while (n--) {
        getline(cin, input);
        int len = input.size();
        bool flag = true;  // 标记是否为回文串

        // 从两端向中间逐个比较字符
        for (int i = 0; i < len / 2; i++) {
            // 如果对称位置的字符不同，则不是回文串
            if (input[i] != input[len - 1 - i]) {
                flag = false;
                break;
            }
        }

        if (flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
