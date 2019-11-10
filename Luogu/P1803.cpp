// [P1803 凌乱的yyy / 线段覆盖] https://www.luogu.org/problem/P1803
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct node
{
    int x;
    int y;
};

bool operator < (node a, node b)
{
    return a.y < b.y;
}

int main()
{
    int n;
    cin >> n;

    node a[n+3];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }

    sort(a, a+n);

    int ans = 1;
    int now = a[0].y;
    for (int i = 1; i < n; i++)
    {
        if (a[i].x >= now)
        {
            now = a[i].y;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}