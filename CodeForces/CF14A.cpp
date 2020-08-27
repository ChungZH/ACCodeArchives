// [CF14A Letter] https://www.luogu.org/problem/CF14A
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int mini, minj, maxi, maxj;
    mini = minj = 60;
    maxi = maxj = -1;

    char a[n + 3][m + 3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') {
                mini = min(i, mini);
                minj = min(j, minj);
                maxi = max(i, maxi);
                maxj = max(j, maxj);
            }
        }
    }

    for (int i = mini; i <= maxi; i++) {
        for (int j = minj; j <= maxj; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
