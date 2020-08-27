// [[USACO19DEC]Cow Gymnastics奶牛体操] https://www.luogu.com.cn/problem/P5831
#include <iostream>
using namespace std;

int a[13][23];

int main()
{
    int k, n;
    cin >> k >> n;

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++) {
            int inp;
            cin >> inp;

            a[i][inp - 1] = j;
        }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;

            int cnt = 0;
            for (int m = 0; m < k; m++)
                if (a[m][i] > a[m][j])
                    cnt++;

            if (cnt == k)
                ans++;
        }
    }

    cout << ans << endl;
    return 0;
}