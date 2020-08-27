// [CF109A Lucky Sum of Digits] https://www.luogu.org/problem/CF109A
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int n4 = n / 4;
    n -= n4 * 4;

    int n7 = n / 7;
    n -= n7 * 7;

    if (n != 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n4; i++) {
            cout << 4;
        }
        for (int i = 0; i < n7; i++) {
            cout << 7;
        }
    }
    cout << '\n';
    return 0;
}