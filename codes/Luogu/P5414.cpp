// [P5414 [YNOI2019]排序] https://www.luogu.org/problemnew/show/P5414
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T-- > 0) {
        int n, sum = 0;
        cin >> n;

        int k[n];
        for (int i = 0; i < n; i++)
            cin >> k[i], sum += k[i];

        int f[n];
        memset(f, 0, sizeof(f));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (k[i] >= k[j])
                    f[i] = max(f[i], f[j]);
            }
            f[i] += k[i];
        }

        sort(f, f + n);
        cout << sum - f[n - 1] << endl;
    }
    return 0;
}
