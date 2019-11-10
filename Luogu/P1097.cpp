// [P1097 统计数字] https://www.luogu.org/problemnew/show/P1097
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    scanf("%d", &n);
     
    long long a[n+5];
     
    for (int i = 0; i < n; i++)
        cin >> a[i];
     
     
    sort(a, a+n);
     
    int cnt = 0, prev = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == prev)
        {
            cnt++;
        } else {
            cout << prev << ' ' << cnt << endl;
            prev = a[i];
            cnt = 1;
        }
    }
    cout << prev << ' ' << cnt << endl;
    return 0;
}