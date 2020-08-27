// [CF16B Burglar and Matches] https://www.luogu.org/problem/CF16B
#include <algorithm>
#include <iostream>
using namespace std;

struct node {
    int x, y;
};

bool cmp(node a, node b)
{
    return a.y > b.y;
}

int main()
{
    int n, m;
    cin >> n >> m;

    node a[m + 3];
    for (int i = 0; i < m; i++) {
        cin >> a[i].x >> a[i].y;
    }

    sort(a, a + m, cmp);

    int ans = 0;
    for (int i = 0; i < m && n; i++) {
        if (n >= a[i].x) {
            ans += a[i].x * a[i].y;
            n -= a[i].x;
        } else {
            ans += n * a[i].y;
            n = 0;
        }
    }

    cout << ans << endl;
    return 0;
}