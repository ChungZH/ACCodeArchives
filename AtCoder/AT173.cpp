// [AT173 単位] https://www.luogu.org/problem/AT173
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    while (scanf("%d%d", &n, &k) == 2 && n && k)
    {
        int a[n+3];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}