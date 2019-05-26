// [CF1064A Make a triangle!] https://www.luogu.org/problemnew/show/CF1064A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    if (a + b > c)
    {
        cout << 0 << endl;
    } else {
        cout << c-b-a+1 << endl;
    }
    return 0;
}
