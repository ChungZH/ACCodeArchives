// [CF1132B Discounts] https://www.luogu.com.cn/problem/CF1132B
#include <iostream>
#include <algorithm>

inline bool cmp(int a, int b)
{
    return a>b;
}

using namespace std;
int main()
{
    int n;
    cin >> n;

    long long a[n+3], sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a+1, a+1+n, cmp);

    int m;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        int q;
        cin >> q;

        cout << sum - a[q] << '\n';
    }
    return 0;
}