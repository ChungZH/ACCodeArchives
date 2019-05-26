// [CF231A Team] https://www.luogu.org/problemnew/show/CF231A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int count;

    for (int i = 0; i < n; i++)
    {
        count = 0;
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a == 1) count++;
        if (b == 1) count++;
        if (c == 1) count++;

        if (count >= 2) ans++;
    }
    cout << ans << endl;
    return 0;
}
