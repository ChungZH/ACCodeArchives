// [P1808 单词分类_NOI导刊2011提高（01）] https://www.luogu.org/problem/P1808
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    map<string, int> m;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        sort(s.begin(), s.end());
        if (!m.count(s)) {
            ans++;
            m[s] = 0;
        }
    }

    cout << ans << endl;
    return 0;
}