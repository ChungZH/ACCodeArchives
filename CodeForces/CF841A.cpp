// [CF841A Generous Kefa] https://www.luogu.org/problemnew/show/CF841A
#include <iostream>
#include <algorithm>
using namespace std;

int b[28];

int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        b[(int)c]++;
        if (b[(int)c] > k)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}

