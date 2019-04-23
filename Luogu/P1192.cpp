// [P1192 台阶问题] https://www.luogu.org/problemnew/show/P1192
#include <bits/stdc++.h>
using namespace std;
int s[1000000];
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    s[0] = 1;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k && i - j >= 0; j++)
        {
            s[i] += s[i-j];
            s[i] %= 100003;
        }
    }
    
    cout << s[n] << endl;
    
    return 0;
}
