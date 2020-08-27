// [CF656F Ace It!] https://www.luogu.org/problemnew/show/CF656F
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int ans = 1;
    getchar();

    for (int i = 0; i < 6; i++) {
        char c = getchar();
        if (c == '1')
            ans += 10;
        else
            ans += c - '0';
    }
    cout << ans << endl;
    return 0;
}
