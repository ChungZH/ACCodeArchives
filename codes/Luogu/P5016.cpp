// [P5016 龙虎斗] https://www.luogu.org/problemnew/show/P5016
#include <bits/stdc++.h>
using namespace std;

long long n, m, p1, p2, s1, s2;
long long dragon, tiger;
int main()
{

#define int long long
    cin >> n;
    long long a[n + 10];
    long long b[n + 10]; // 气势
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> m >> p1 >> s1 >> s2;

    a[p1] += s1;

    for (int i = 1; i < m; i++) {
        b[i] = a[i] * (m - i);
        dragon += b[i];
    }
    for (int i = m + 1; i <= n; i++) {
        b[i] = a[i] * (i - m);
        tiger += b[i];
    }

    p2 = m;
    if (dragon == tiger) {
        cout << m << endl;
        return 0;
    }

    int cha = max(dragon, tiger) - min(dragon, tiger);

    if (dragon > tiger) {
        for (int i = m + 1; i <= n; i++) {
            int temp = tiger + s2 * (i - m);

            int newcha = max(temp, dragon) - min(temp, dragon);
            if (newcha < cha) {
                cha = newcha;
                p2 = i;
            }
        }
    } else if (dragon < tiger) {
        for (int i = 1; i < m; i++) {
            int temp = dragon + s2 * (m - i);

            int newcha = max(temp, tiger) - min(temp, tiger);
            if (newcha < cha) {
                cha = newcha;
                p2 = i;
            }
        }
    }
    cout << p2 << endl;
    return 0;
}
