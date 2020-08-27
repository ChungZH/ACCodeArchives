// [AT2412 最大の和] https://www.luogu.org/problemnew/show/AT2412
#include <iostream>
using namespace std;
int a[100001], b[100001];
int main()
{
    int n, k, maxx = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    b[1] = a[1];

    for (int i = 2; i <= n; i++) {
        b[i] = b[i - 1] + a[i];
    }

    for (int i = k; i <= n; i++) {
        if (b[i] - b[i - k] > maxx)
            maxx = b[i] - b[i - k];
    }

    cout << maxx << endl;
    return 0;
}
