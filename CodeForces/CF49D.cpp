// [CF49D Game] https://www.luogu.com.cn/problem/CF49D
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string a="", b="";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) a += '1', b += '0';
        else a += '0', b += '1';
    }

    int ans1 = 0, ans2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != a[i])
        {
            ans1++;
        }
        if (s[i] != b[i])
        {
            ans2++;
        }
    }

    cout << min(ans1, ans2) << endl;
    return 0;
}