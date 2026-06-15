// 题目：统计字符串中的数字字符个数
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    // 多组输入测试用例组数
    while (cin >> n)
    {
        while (n--)
        {
            string s;
            cin >> s;
            int cnt = 0;
            // 遍历字符串，统计0~9数字字符
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                    cnt++;
            }
            // 输出当前字符串的数字字符总数
            cout << cnt << endl;
        }
    }
    return 0;
}

// 题目：统计字符串中汉字个数（GBK编码适配，标准C++安全写法）
// 原理：GBK编码下汉字占2个字节，且每个字节最高位为1，char类型下表现为负数
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // 吸收换行符，避免getline读取空行
    
    while (n--)
    {
        string str;
        getline(cin, str);
        int byte_cnt = 0;
        // 统计所有汉字负数字节
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] < 0)
                byte_cnt++;
        }
        // GBK汉字固定2字节，字节数/2即为汉字个数
        cout << byte_cnt / 2 << endl;
    }
    return 0;
}