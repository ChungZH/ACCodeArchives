// [CF1106A Lunar New Year and Cross Counting] https://www.luogu.org/problemnew/show/CF1106A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    char a[n + 5][n + 5];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    int k = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 'X' && a[i + 1][j + 1] == 'X' && a[i + 1][j - 1] == 'X' && a[i - 1][j - 1] == 'X' && a[i - 1][j + 1] == 'X') {
                k++;
            }

    cout << k << endl;
    return 0;
}