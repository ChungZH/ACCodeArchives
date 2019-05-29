// [SP1 TEST - Life, the Universe, and Everything] https://www.luogu.org/problemnew/show/SP1
#include <iostream>
#include <queue>
#include <set>
#include <fstream>

using namespace std;

#define SUBMIT

int main()
{
#ifndef SUBMIT
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    int n;
    while (cin >> n)
    {
        if (n == 42) break;
        cout << n <<endl;
    }
    return 0;
}
