#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int n, m;
    string a;

    cin >> n;
    cin.ignore();  // 忽略 n 后面的换行符

    while (n--) {
        m = 0;
        getline(cin, a);

        // 遍历字符串，统计汉字字节数
        // GBK 编码：汉字占 2 字节，每个字节的最高位为 1（即 char 值为负数）
        for (int i = 0; i < a.size(); i++)
            if (a[i] < 0) m++;

        // 每个汉字占 2 字节，所以除以 2 得到汉字个数
        cout << m / 2 << endl;
    }
    return 0;
}
