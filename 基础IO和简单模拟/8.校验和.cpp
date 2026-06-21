#include <iostream>
#include <string>
using namespace std;

/*
 * 核心思路：
 * 1. 逐行读入字符串，遇到 "#" 时结束
 * 2. 遍历每个字符，只处理大写字母 A~Z
 * 3. 校验和 = 每个大写字母的 "位置 × 字母值" 之和
 *    - 位置从 1 开始（i+1）
 *    - 字母值：A=1, B=2, ..., Z=26（即 line[i]-'A'+1）
 * 4. 多组输入，每行独立计算并输出
 */
int main()
{
    string line;
    while(getline(cin, line))
    {
        if(line == "#") break;  // 遇到 "#" 结束输入
        int sum = 0;
        for(int i = 0; i < line.size(); i++)
        {
            if(line[i] >= 'A' && line[i] <= 'Z')  // 只处理大写字母
                sum += (i + 1) * (line[i] - 'A' + 1);  // 位置 × 字母值
        }
        cout << sum << endl;
    }
    return 0;
}
