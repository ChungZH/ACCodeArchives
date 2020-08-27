// [P1068 分数线划定] https://www.luogu.org/problemnew/show/P1068
#include <algorithm>
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
struct s {
    int id;
    int nu;
};
bool cmp(s a, s b)
{
    if (a.nu > b.nu) {
        return true;
    } else if (a.nu == b.nu) {
        if (a.id < b.id)
            return true;
        else
            return false;
    } else
        return false;
}

int main()
{
    //freopen("211.in", "r",  stdin);
    //freopen("211.out", "w",  stdout);

    int n, m;
    cin >> n >> m;
    s a[n];
    s b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].nu;
        b[i].id = a[i].id;
        b[i].nu = a[i].nu;
    }

    sort(a, a + n, cmp);

    int t = floor(m * 1.5);
    int fenshux = a[t - 1].nu;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i].nu >= fenshux) {
            sum++;
        } else {
            break;
        }
    }
    cout << a[t - 1].nu << " " << sum << endl;
    sort(b, b + n, cmp);
    for (int i = 0; i < n; i++) {
        if (b[i].nu >= fenshux) {
            cout << b[i].id << " " << b[i].nu << endl;
        }
    }

    return 0;
}