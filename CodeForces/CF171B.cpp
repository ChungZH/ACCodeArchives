// [CF171B Star] https://www.luogu.org/problemnew/show/CF171B
#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 1)
        return 1;
    return (n * 2 - 1) * 6 - 6 + f(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << f(n) << endl;
    return 0;
}