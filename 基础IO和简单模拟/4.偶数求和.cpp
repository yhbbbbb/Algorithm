#include <iostream>
using namespace std;

int main()
{
    int n, m, i;
    while(cin >> n >> m)
    {
        for(i = 1; i + m <= n; i += m)
        {
            cout << 2 * i + m - 1 << " ";
        }
        cout << n + i << endl;
    }
    return 0;
}
