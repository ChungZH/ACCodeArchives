// [P1765 手机_NOI导刊2010普及（10）] https://www.luogu.org/problemnew/show/P1765
#include <iostream>

using namespace std;

int ans;
const int a[26] { 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4 };

int main()
{
    string s;
    getline(cin, s);

    const int slen = s.length();

    for (int i = 0; i < slen; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            ans += a[s[i] - 'a'];
        } else if (s[i] == ' ') {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
