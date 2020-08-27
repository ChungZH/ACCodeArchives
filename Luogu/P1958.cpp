// [P1958 上学路线_NOI导刊2009普及（6）] https://www.luogu.org/problemnew/show/P1958

// DFS:

#include <cstring>
#include <iostream>

using namespace std;

int a, b, n, ans;
int flag[50][50];
void dfs(int x, int y);

int main()
{
    memset(flag, 0, sizeof(flag));

    cin >> a >> b >> n;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            flag[i][j] = 1;
        }
    }

    int x, y;

    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        flag[x][y] = 0;
    }

    dfs(1, 1);

    cout << ans << endl;
    return 0;
}

void dfs(int x, int y)
{
    if (x == a && y == b) {
        ans++;
        return;
    }

    if (flag[x][y + 1] == 1) {
        dfs(x, y + 1);
    }

    if (flag[x + 1][y] == 1) {
        dfs(x + 1, y);
    }
}

// dp:

#include <iostream>

using namespace std;

int a, b, n, ans;
bool flag[50][50];
int dp[50][50];

int main()
{
    cin >> a >> b >> n;

    int x, y;

    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        flag[x][y] = true;
    }

    dp[1][1] = 1;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == 1 && j == 1 || flag[i][j] == true)
                continue;

            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    cout << dp[a][b] << endl;
    return 0;
}
