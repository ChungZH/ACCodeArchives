// [CF1146A Love "A"] https://www.luogu.org/problemnew/show/CF1146A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int asum = 0;

    string s;
    cin >> s;

    int slen = s.length();

    for (int i = 0; i < slen; i++) {
        if (s[i] == 'a')
            asum++;
    }

    while (asum <= slen / 2) {
        slen--;
    }

    cout << slen << endl;

    return 0;
}
