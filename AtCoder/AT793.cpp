// [AT793 AtCoder社の給料] https://www.luogu.org/problemnew/show/AT793
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = (1+n)*n/2 * 10000 / n;
    cout << ans << endl;
    return 0;
}