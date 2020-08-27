// [P2799 国王的魔镜] https://www.luogu.org/problemnew/show/P2799
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = s.length();

    while (s.length() > 1) {
        string left = s.substr(0, s.length() / 2);
        string right = s.substr(s.length() / 2, s.length() - 1);
        reverse(left.begin(), left.end());

        // cout << "left=" << left << "  right=" << right << endl;

        if (left != right)
            break;

        s = left;
        ans /= 2;
    }

    cout << ans << endl;

    return 0;
}