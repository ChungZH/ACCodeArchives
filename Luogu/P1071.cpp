// [P1071 潜伏者] https://www.luogu.org/problem/P1071
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

char mizi[26];
bool flag[26];
bool bfla[26];

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    if (a.length() < 26)
    {
        cout << "Failed\n";
        return 0;
    }

    const int alen = a.length();
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < alen; i++)
    {
        mizi[a[i]-'A'] = b[i];
        if (!flag[a[i]-'A']) 
            cnt1++;
        if (!bfla[b[i]-'A'])
            cnt2++;
        flag[a[i]-'A'] = 1;
        bfla[b[i]-'A'] = 1;
    }
    if (cnt1 != 26 || cnt2 != 26)
    {
        cout << "Failed\n";
        return 0;
    }

    for (int i = 0; i < alen; i++)
    {
        if (b[i] != mizi[a[i]-'A'])
        {
            cout << "Failed\n";
            return 0;
        }
    }

    const int clen = c.length();
    for (int i = 0; i < clen; i++)
    {
        cout << mizi[c[i]-'A'];
    }
    cout << '\n';
    return 0;
}