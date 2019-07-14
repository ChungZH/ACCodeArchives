// [CF339A Helpful Maths] https://www.luogu.org/problemnew/show/CF339A
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int a[100], n;
    string s;

    // memset(a, 4, sizeof(n));

    cin >> s;

    const int slen = s.length();
    for (int i = 0; i < slen; i += 2)
    {
        a[n++] = s[i] - '0';
    }
    
    sort(a, a+n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i != n-1) cout << '+';
    }
    cout << endl;

    return 0;
}