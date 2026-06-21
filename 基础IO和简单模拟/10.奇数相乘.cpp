#include <iostream>
using namespace std;

/*
 * 核心思路：
 * 1. 读入 n 个整数，只关注其中的奇数（x % 2 != 0）
 * 2. 将所有奇数累乘到 product 中，偶数直接跳过
 * 3. 乘积用 long long 防止溢出
 * 4. 多组输入，每组独立计算并输出
 */
int main(){
    int n;
    while(cin >> n)
    {
        long long product = 1;  // 乘积初始为 1（乘法单位元）
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x % 2 != 0) product *= x;  // 是奇数则累乘，偶数跳过
        }
        cout << product << endl;
    }
    return 0;
}
