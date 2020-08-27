// [P1589 泥泞路] https://www.luogu.org/problem/P1589
#include <algorithm>
#include <iostream>

using namespace std;

struct road {
    int s, e;
};

inline bool cmp(const road t1, const road t2)
{
    return t1.s < t2.s;
}

int main()
{
    int n, l;
    cin >> n >> l;

    road a[n + 3];
    for (int i = 0; i < n; i++) {
        cin >> a[i].s >> a[i].e;
    }

    sort(a, a + n, cmp);

    int now = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].s > now) {
            now = a[i].s;
        }
        while (now < a[i].e) {
            now += l;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}