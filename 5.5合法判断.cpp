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
        bool flag = true;  // 标记是否为合法标识符

        // 首字符必须是下划线或字母
        if (!(input[0] == '_' ||
              (input[0] >= 'a' && input[0] <= 'z') ||
              (input[0] >= 'A' && input[0] <= 'Z'))) {
            flag = false;
        }

        // 其余字符必须是下划线、字母或数字
        for (int i = 1; i < len && flag; i++) {
            if (!(input[i] == '_' ||
                  (input[i] >= 'a' && input[i] <= 'z') ||
                  (input[i] >= 'A' && input[i] <= 'Z') ||
                  (input[i] >= '0' && input[i] <= '9'))) {
                flag = false;
                break;
            }
        }

        if (flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
