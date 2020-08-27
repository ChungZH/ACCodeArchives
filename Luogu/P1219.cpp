// [P1219 八皇后] https://www.luogu.org/problemnew/show/P1219
#include <cmath>
#include <iostream>

using namespace std;

int n, ans, a[14];
bool b[14], c[30], d[30];

void dfs(int step);

int main()
{
    ios::sync_with_stdio(false);

    cin >> n;

    dfs(1);

    cout << ans << '\n';

    return 0;
}

void dfs(int step)
{
    if (step == n + 1) {
        ans++;

        if (ans <= 3) {
            for (int i = 1; i <= n; i++) {
                cout << a[i] << ' ';
            }
            cout << '\n';
        }

        return;
    }

    for (int i = 1; i <= n; i++) {
        if ((!b[i]) && (!c[step + i]) && (!d[step - i + n])) {
            a[step] = i;
            b[i] = c[step + i] = d[step - i + n] = 1;
            dfs(step + 1);
            a[step] = 0;
            b[i] = c[step + i] = d[step - i + n] = 0;
        }
    }
}