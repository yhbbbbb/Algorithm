#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    while(getline(cin, line))
    {
        if(line == "#") break;
        int sum = 0;
        for(int i = 0; i < line.size(); i++)
        {
            if(line[i] >= 'A' && line[i] <= 'Z')
                sum += (i + 1) * (line[i] - 'A' + 1);
        }
        cout << sum << endl;
    }
    return 0;
}
