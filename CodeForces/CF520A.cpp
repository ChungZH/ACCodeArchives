// [CF520A Pangram] https://www.luogu.org/problemnew/show/CF520A
#include <bits/stdc++.h>
using namespace std;

int table[26];

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
        {
            s[i] += 32;
        }

        table[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (table[i] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
