// [CF58A Chat room] https://www.luogu.org/problemnew/show/CF58A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.length() && cnt < 5; i++)
    {
        switch (cnt)
        {
        case 0:
            if (s[i] == 'h') cnt++;
            break;
        case 1:
            if (s[i] == 'e') cnt++;
            break;
        case 2:
            if (s[i] == 'l') cnt++;
            break;
        case 3:
            if (s[i] == 'l') cnt++;
            break;
        case 4:
            if (s[i] == 'o') cnt++;
            break;
        }
    }

    if (cnt == 5)
    {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}