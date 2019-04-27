// [P1657 选书] https://www.luogu.org/problemnew/show/P1657
#include <iostream>

using namespace std;

int x, ans;
bool flag[30], like[30][30];

void dfs(int step);

int main()
{
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        int a, b;
        cin >> a >> b;

        like[i][a] = true;
        like[i][b] = true;
        flag[i] = true;
    }

    dfs(1);

    cout << ans << endl;

    return 0;
}

void dfs(int step)
{

    for (int i = 1; i <= x; i++)
    {
        if (flag[i] && like[step][i])
        {
            flag[i] = false;

            if (step == x)
            {
                ans++;
            } else {
                dfs(step+1);
            }
            
            flag[i] = true;
        }
    }
}
