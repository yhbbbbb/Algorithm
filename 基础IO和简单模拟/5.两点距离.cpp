#include<bits/stdc++.h>
using namespace std;

/*
 * 核心思路：
 * 1. 读入两个点的坐标 (x1,y1) 和 (x2,y2)
 * 2. 用欧几里得距离公式：d = sqrt((x2-x1)^2 + (y2-y1)^2)
 * 3. 输出保留 2 位小数
 * 4. 多组输入，直到文件结束（EOF）
 */
int main(){
    double x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2){
        cout.precision(2);
        cout << fixed << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;
    }
    return 0;
}