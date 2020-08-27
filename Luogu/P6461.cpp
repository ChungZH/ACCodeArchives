// [P6401 [COCI2014-2015#2] MOBITEL] https://www.luogu.com.cn/problem/P6401
#include <iostream>
using namespace std;
const char t1[26] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6,
    6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };
const int times[26] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1,
    2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4 };
int inp[10];
int main()
{
    int t;
    for (int i = 1; i <= 9; i++) {
        cin >> t;
        inp[t] = i;
    }

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (t1[s[i] - 'a'] == t1[s[i - 1] - 'a'])
            cout << '#';
        for (int j = 0; j < times[s[i] - 'a']; j++) {
            cout << inp[t1[s[i] - 'a']];
        }
    }

    cout << endl;
    return 0;
}