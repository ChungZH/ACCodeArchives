// [AT2554 Choose Integers] https://www.luogu.org/problem/AT2554
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; i <= 1000; i++) {
        if (a * i % b == c) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}