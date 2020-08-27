// [AT360 雨上がり] https://www.luogu.org/problem/AT360
#include <cmath>
#include <iostream>

using namespace std;

int f[105];

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    f[1] = (s[0] == 'X');
    f[2] = (s[1] == 'X');
    f[3] = (s[2] == 'X');
    for (int i = 4; i <= n; i++) {
        f[i] = min(min(f[i - 3], f[i - 2]), f[i - 1]);

        if (s[i - 1] == 'X')
            f[i]++;
    }

    cout << f[n] << endl;
    return 0;
}