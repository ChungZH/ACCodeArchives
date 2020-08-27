// [AT1930 赤赤赤赤青] https://www.luogu.org/problemnew/show/AT1930
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    cout << min(x - 1, n - x) << endl;
    return 0;
}