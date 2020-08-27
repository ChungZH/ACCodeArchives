// [P3984 高兴的津津] https://www.luogu.org/problemnew/show/P3984
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, T, sum = 0, sta = 0;

    cin >> N >> T;

    int a[200002];

    for (int i = 0; i < N; i++)
        cin >> a[i];

    sum = T;
    sta = a[0];

    for (int i = 1; i < N; i++) {
        if (a[i] < sta + T) {
            sum += a[i] - sta;
            sta = a[i];
        } else {
            sum += T;
            sta = a[i];
        }
    }

    cout << sum << endl;
    return 0;
}
