#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;

    // 多组输入
    while (cin >> n) {
        while (n--) {
            cin >> s;
            int cnt = 0;

            // 遍历字符串，统计数字字符的个数
            for (int i = 0; i < s.size(); i++)
                if (s[i] >= '0' && s[i] <= '9') cnt++;

            cout << cnt << endl;
        }
    }
    return 0;
}
