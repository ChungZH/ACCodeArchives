// [CF1006A Adjacent Replacements] https://www.luogu.org/problemnew/show/CF1006A
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        if (t % 2 == 0)
            cout << t - 1 << ' ';
        else
            cout << t << ' ';
    }
    return 0;
}