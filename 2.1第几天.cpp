#include <iostream>
using namespace std;

int main() {
    // 每个月的天数（默认非闰年，2月为28天）
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, date, num;

    // 多组输入，格式为 "年/月/日"，如 2024/3/15
    while (cin >> year) {
        // 读取分隔符 '/' 和后面的月、日
        char sep;
        cin >> sep >> month >> sep >> date;

        num = 0;

        // 判断闰年：能被400整除，或者能被4整除但不能被100整除
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            day[1] = 29;  // 闰年2月有29天
        else
            day[1] = 28;  // 平年2月有28天

        // 累加前面所有月份的天数
        for (int i = 0; i < month - 1; i++)
            num += day[i];

        // 加上当月的日期
        num += date;

        // 输出该日期是这一年的第几天
        cout << num << endl;
    }
    return 0;
}
