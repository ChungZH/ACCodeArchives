// [AT1171 choku語] https://www.luogu.org/problemnew/show/AT1171
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    bool ans = 1;
    string s;
    cin >> s;

    int slen = s.length();
    while (slen > 0)
    {
        if (slen > 1 && (s[slen-1] == 'h' && s[slen-2] == 'c'))
        {
            slen -= 2;
        } else if (s[slen-1] == 'o' || s[slen-1] == 'k' || s[slen-1] == 'u') {
            slen--;
        } else {
            ans = 0;
            break;
        }
    }

    if (ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}