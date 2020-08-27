// [P2970 [USACO09DEC]自私的放牧Selfish Grazing] https://www.luogu.org/problem/P2970
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

struct note {
    int s, e;
};

bool operator<(const note a, const note b)
{
    return a.e < b.e;
}

int main()
{
    int n;
    cin >> n;

    note a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].s >> a[i].e;
    }

    sort(a, a + n);

    int now = a[0].e, ans = 1;
    for (int i = 1; i < n; i++) {
        if (a[i].s >= now) {
            ans++;
            now = a[i].e;
        }
    }

    cout << ans << endl;
    return 0;
}