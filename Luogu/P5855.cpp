// [P5855 「SWTR-03」Password] https://www.luogu.com.cn/problem/P5855
#include <iostream>

using namespace std;

long long n, k, v[20];
long long ans = 1;
string a, s[20];
int main()
{
    cin >> n >> k >> a;
    for (int i = 0; i < n; i++) {
        cin >> v[i] >> s[i];
        ans *= v[i];

        // 判断能否试出
        bool flag = 0;
        for (int j = 0; j < v[i]; j++) {
            if (a[i] == s[i][j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout << -1 << endl;
            return 0;
        }
    }

    string d;
    for (int i = 0; i < k; i++) {
        cin >> d;
        bool wf = 1;
        for (int j = 0; j < d.length(); j++) {
            int flag = 0;
            for (int k = 0; k < v[j]; k++) {
                if (d[j] == s[j][k]) {
                    flag = 1;
                }
            }
            if (!flag) {
                wf = 0;
                break;
            }
        }
        if (wf) {
            ans--;
        }
    }

    cout << ans << endl;
    return 0;
}