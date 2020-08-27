// [#10001. 「一本通 1.1 例 2」种树] https://loj.ac/problem/10001
#include <iostream>
#include <algorithm>
using namespace std;
struct tree
{
    int b; // begin
    int e; // end
    int t; // t
}a[5005];
bool road[30004];
bool cmp(tree a, tree b)
{
    return a.e < b.e;
}
int main()
{
    int n, h, ans = 0;
    cin >> n >> h;
    for (int i = 0; i < h; i++)
    {
        cin >> a[i].b >> a[i].e >> a[i].t;
    }

    sort(a, a+h, cmp);

    for (int i = 0; i < h; i++)
    {
        int cnt = 0;
        for (int j = a[i].b; j <= a[i].e; j++)
            if (road[j]) cnt++;
    
        if (cnt >= a[i].t) continue;

        for (int j = a[i].e; j >= a[i].b; j--)
        {
            if (!road[j])
            {
                road[j] = 1;
                cnt++;
                ans++;
                if (cnt == a[i].t) break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}