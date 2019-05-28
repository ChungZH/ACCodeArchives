// [P2240 数的计数数据加强版] https://www.luogu.org/problemnew/show/P2240
#include <iostream>

using namespace std;

int h[1500002];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        h[i] = 1;
        for (int j = 1; j <= i/2; j++)
        {
            h[i] += h[j];
        }
    }

    cout << h[n] << endl;
    return 0;
}
