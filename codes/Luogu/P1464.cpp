// [P1464 Function] https://www.luogu.org/problemnew/show/P1464
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

long long book[25][25][25];
long long w(long long a, long long b, long long c);

int main()
{
    memset(book, -1, sizeof(book));
    int a, b, c;

    while (1) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) {
            break;
        }
        printf("w(%d, %d, %d) = ", a, b, c);
        cout << w(a, b, c) << endl;
    }

    return 0;
}

long long w(long long a, long long b, long long c)
{
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    } else if (a > 20 || b > 20 || c > 20) {
        return w(20, 20, 20);
    } else if (a < b && b < c && book[a][b][c] == -1) {
        book[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    } else if (book[a][b][c] == -1) {
        book[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }

    return book[a][b][c];
}
