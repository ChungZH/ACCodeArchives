// [P1827 美国血统 American Heritage] https://www.luogu.org/problem/P1827
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

string a, b;

void f(int x1, int y1, int x2, int y2)
{
    if (x1 > y1 || x2 > y2) {
        return;
    } else {
        for (int i = x1; i <= y1; i++) {
            if (a[i] == b[x2]) {
                f(x1, i - 1, x2 + 1, x2 + i - x1);
                f(i + 1, y1, x2 + i - x1 + 1, y2);
                cout << b[x2];
            }
        }
    }
}

int main()
{
    cin >> a >> b;
    f(0, a.length() - 1, 0, b.length() - 1);
    return 0;
}