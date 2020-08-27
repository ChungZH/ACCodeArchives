// [CF445A DZY Loves Chessboard] https://www.luogu.org/problem/CF445A
#include <algorithm>
#include <iostream>

using namespace std;
#define f(x, y, z) for (int x = (y), __ = (z); x < __; ++x)
int main()
{
    int n, m;
    cin >> n >> m;

    char a[n][m];
    f(i, 0, n)
    {
        f(j, 0, m)
        {
            cin >> a[i][j];
            if (a[i][j] != '-') {
                if ((i + j) % 2 == 0) {
                    a[i][j] = 'W';
                } else {
                    a[i][j] = 'B';
                }
            }
        }
    }

    f(i, 0, n)
    {
        f(j, 0, m)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}