// [P1563 玩具谜题] https://www.luogu.org/problem/P1563
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

struct note {
    int dire;
    string name;
};
int main()
{
    int n, m;

    cin >> n >> m;
    note a[n + 3];
    for (int i = 0; i < n; i++) {
        cin >> a[i].dire >> a[i].name;
    }

    int now = 0;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        if (a[now].dire == 0 && x == 0) {
            now = (now + n - y) % n;
        } else if (a[now].dire == 1 && x == 1) {
            now = (now + n - y) % n;
        } else if (a[now].dire == 1 && x == 0) {
            now = (now + y) % n;
        } else if (a[now].dire == 0 && x == 1) {
            now = (now + y) % n;
        }
    }

    cout << a[now].name << endl;
    return 0;
}
