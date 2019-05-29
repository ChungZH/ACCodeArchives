// [P5019 铺设道路] https://www.luogu.org/problemnew/show/P5019
#include <bits/stdc++.h>
using namespace std;

long long n, now, ans;

int main()
{
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        
        if (a > now)
        {
            ans += a - now;
        }
        
        now = a;
    }
    
    cout << ans << endl;
    
    return 0; 
}
