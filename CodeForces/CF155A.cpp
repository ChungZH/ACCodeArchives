// [CF155A I_love_%username%] https://www.luogu.org/problemnew/show/CF155A
#include <iostream>

using namespace std;

int n, ans;
int maxx = 0, minn = 99999999;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (i == 0)
        {
            maxx = a; minn = a; 
            continue;
        }

        if (a > maxx)
        {
            ans++;
            maxx = a;
        }

        if (a < minn)
        {
            ans++;
            minn = a;
        }
    }
    cout << ans << endl;

    return 0;
}
