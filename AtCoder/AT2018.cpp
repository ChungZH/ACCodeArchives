// [AT2018 バイナリハックイージー / Unhappy Hacking (ABC Edit)] https://www.luogu.org/problem/AT2018
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int a[15];
    int x = 0;

    int slen = s.length();
    for (int i = 0; i < slen; i++)
    {
        if (s[i] == '0') 
        {
            a[x++] = 0;
        } else if (s[i] == '1') {
            a[x++] = 1;
        } else {
            if (x > 0) x--;
        }
    }

    for (int i = 0; i < x; i++)
        cout << a[i];
    cout << endl;
    return 0;
}