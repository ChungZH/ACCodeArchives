// [AT1577 ダイスゲーム] https://www.luogu.org/problemnew/show/AT1577
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
    } else {
        cout << n*7/2 << endl;
    }
    return 0;
}