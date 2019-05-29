// [CF1060A Phone Numbers] https://www.luogu.org/problemnew/show/CF1060A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == '8') count++;
    }

    cout << min(count, n/11) << endl;
    return 0;
}
