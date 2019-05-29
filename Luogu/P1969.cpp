// [P1969 积木大赛] https://www.luogu.org/problemnew/show/P1969
#include <bits/stdc++.h>
using namespace std;

long long n, now, ans;
long long a[1000000];

int main()
{
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    now = ans = a[0];
    
    for (int i = 1; i < n; i++)
    {
        if (a[i] > now)
        {
            ans += a[i] - now;
        }
        
        now = a[i];
    }
    
    cout << ans << endl;
    
    return 0; 
}
