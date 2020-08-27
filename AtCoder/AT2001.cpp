// [AT2001 Wanna go back home] https://www.luogu.org/problemnew/show/AT2001
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

string s;
int slen;
map<char, char> m;

bool check(char c)
{
    for (int i = 0; i < slen; i++)
        if (s[i] == m[c])
            return true;
    return false;
}

int main()
{
    m['N'] = 'S';
    m['S'] = 'N';
    m['E'] = 'W';
    m['W'] = 'E';

    cin >> s;

    bool flag = false;

    slen = s.length();
    for (int i = 0; i < slen; i++) {
        if (s[i] == 'N')
            flag = check('N');
        else if (s[i] == 'S')
            flag = check('S');
        else if (s[i] == 'W')
            flag = check('W');
        else if (s[i] == 'E')
            flag = check('E');

        if (!flag) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}