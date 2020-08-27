// [AT3848 Postal Code] https://www.luogu.org/problemnew/show/AT3848
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int a, b;
    string s;

    cin >> a >> b;
    cin >> s;

    int slen = s.length();
    for (int i = 0; i < a; i++) {
        if (s[i] < '0' || s[i] > '9') {
            cout << "No" << endl;
            return 0;
        }
    }

    if (s[a] != '-') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = a + 1; i < slen; i++) {
        if (s[i] < '0' || s[i] > '9') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}