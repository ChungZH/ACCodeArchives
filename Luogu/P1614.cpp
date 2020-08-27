// [P1614 爱与愁的心痛] https://www.luogu.org/problemnew/show/P1614
#include <algorithm>
#include <iostream>

using namespace std;

int a[3005], b[3005];

int main()
{
    int n, m, minn = 1 << 30;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        b[i] = b[i - 1] + a[i];
    }

    for (int i = m; i <= n; i++) {
        minn = min(minn, b[i] - b[i - m]);
    }

    cout << minn << endl;

    return 0;
}
