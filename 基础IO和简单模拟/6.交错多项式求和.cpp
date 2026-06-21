#include<bits/stdc++.h>
using namespace std;

/*
 * 核心思路：
 * 1. 计算交错调和级数：S = 1 - 1/2 + 1/3 - 1/4 + ... ± 1/n
 * 2. 奇数项为正，偶数项为负，逐项累加到 sum
 * 3. 结果用 double 保留小数，输出保留 2 位小数
 * 4. t 组输入，每组独立计算
 */
int main(){
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        double sum = 0.0;  // 每组重置为 0
        for(int j = 1; j <= n; j++)
        {
            if(j % 2 == 1) sum += 1.0 / j;  // 奇数项：加
            else sum -= 1.0 / j;             // 偶数项：减
        }
        cout.precision(2);
        cout << fixed << sum << endl;  // 保留 2 位小数输出
    }

    return 0;
}