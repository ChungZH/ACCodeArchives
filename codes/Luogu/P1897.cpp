// [P1897 电梯里的爱情] https://www.luogu.org/problemnew/show/P1897
#include <iostream>
using namespace std;

bool pd[100000000];

int main()
{
    int n, ans = 0, high = 0;
    cin >> n;

    ans = n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (!pd[a]) {
            ans += 5;
            pd[a] = 1;
        }
        if (a > high)
            high = a;
    }

    ans += high * 10;

    cout << ans << endl;

    return 0;
}
