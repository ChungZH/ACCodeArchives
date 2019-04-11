// [P1866 编号] https://www.luogu.org/problemnew/show/P1866
#include <iostream>
#include <algorithm>

using namespace std;

int Maxnumber[100], book[1000];
long long n, ans=1;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> Maxnumber[i];
    }

    sort(Maxnumber+1, Maxnumber+n+1);

    for (int i = 1; i <= n; i++)
    {
        ans *= (Maxnumber[i] - i + 1); 
        ans %= 1000000007;
    }
    
    cout << ans << endl;

    return 0;
}
