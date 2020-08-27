// [CF1186A Vus the Cossack and a Contest] https://www.luogu.org/problemnew/show/CF1186A
#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (m >= n && k >= n)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}