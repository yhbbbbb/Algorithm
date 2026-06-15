#include <iostream>
using namespace std;

int main() {
    int n;
    int bills[] = {100, 50, 10, 5, 2, 1};
    while (cin >> n) {
        int count = 0;
        for (int i = 0; i < 6; i++) {
            count += n / bills[i];
            n %= bills[i];
        }
        cout << count << endl;
    }
    return 0;
}
