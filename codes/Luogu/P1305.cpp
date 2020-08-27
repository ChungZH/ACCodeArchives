// [P1305 新二叉树] https://www.luogu.org/problemnew/show/P1305
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;

    cin >> s;

    for (int i = 1; i < n; i++) {
        string s1;

        cin >> s1;

        int temp = s.find(s1[0]);

        s.erase(s.begin() + temp);

        s.insert(temp, s1);
    }

    int slen = s.length();

    for (int i = 0; i < slen; i++) {
        if (s[i] != '*')
            cout << s[i];
    }
    return 0;
}
