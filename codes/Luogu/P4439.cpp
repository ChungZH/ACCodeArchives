// [P4439 [COCI2017-2018#3] Aron] https://www.luogu.org/problem/P4439
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 2;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1])
            ans++;
    }

    cout << ans << endl;
    return 0;
}