// [CF822A I'm bored with life] https://www.luogu.org/problemnew/show/CF822A
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    long long ans = 1;
    for (int i = 1; i <= min(a, b); i++) {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}