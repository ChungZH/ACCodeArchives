// [UVA1585 得分 Score] https://www.luogu.org/problemnew/show/UVA1585
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    string s;

    while (T-- > 0) {
        cin >> s;
        const int slen = s.length();
        int cnt = 0, sum = 0;
        for (int i = 0; i < slen; i++) {
            if (s[i] == 'O')
                sum += (++cnt);
            else
                cnt = 0;
        }
        cout << sum << endl;
    }
    return 0;
}