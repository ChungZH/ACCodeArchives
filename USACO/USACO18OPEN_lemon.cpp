// [P4379 [USACO18OPEN]Lemonade Line] https://www.luogu.org/problem/P4379
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;

    int w[n + 3];
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    sort(w, w + n, cmp);

    int ans = n;
    for (int i = 0; i < n; i++) {
        if (w[i] < i) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}