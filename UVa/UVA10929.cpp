// [UVA10929 You can say 11] https://www.luogu.com.cn/problem/UVA10929
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string s;
    while (1) {
        cin >> s;
        if (s == "0")
            break;

        long long t = 0;
        cout << s;
        const long long slen = s.length();
        for (int i = 0; i < slen; i++) {
            if (i % 2 == 0) {
                t += s[i] - '0';
            } else {
                t -= s[i] - '0';
            }
        }
        if (t % 11 == 0)
            cout << " is a multiple of 11.\n";
        else
            cout << " is not a multiple of 11.\n";
    }
    return 0;
}
