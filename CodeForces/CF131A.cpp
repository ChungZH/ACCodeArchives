// [CF131A cAPS lOCK] https://www.luogu.org/problemnew/show/CF131A
#include <iostream>
using namespace std;

int main()
{
    string s;
    bool flag1 = false, flag2 = false;

    cin >> s;

    if (s[0] <= 'Z' && s[0] >= 'A')
        flag1 = true;
    else
        flag2 = true;

    const int slen = s.length();
    for (int i = 1; i < slen; i++) {
        if (s[i] <= 'z' && s[i] >= 'a') {
            flag1 = false;
            flag2 = false;
        }
    }

    if (flag1 || flag2) {
        for (int i = 0; i < slen; i++) {
            if (s[i] <= 'z' && s[i] >= 'a') {
                cout << (char)(s[i] - 32);
            } else {
                cout << (char)(s[i] + 32);
            }
        }
        cout << endl;
    } else {
        cout << s << endl;
    }
    return 0;
}
