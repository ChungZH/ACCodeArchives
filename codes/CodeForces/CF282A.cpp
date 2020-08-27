// [CF282A Bit++] https://www.luogu.org/problemnew/show/CF282A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "X++" || s == "++X") {
            x++;
        }
        if (s == "X--" || s == "--X") {
            --x;
        }
    }
    cout << x << endl;
    return 0;
}