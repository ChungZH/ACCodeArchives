// [CF710A King Moves] https://www.luogu.org/problemnew/show/CF710A
#include <iostream>
using namespace std;

char c;
int a, b, ans;

const int dx[8] { 1, 0, -1, 0, 1, 1, -1, -1 },
          dy[8] { 0, 1, 0, -1, 1, -1, 1, -1 };

int main()
{
    cin >> c >> b;
    a = c - 'a' + 1;

    for (int i = 0; i < 8; i++)
    {
        int tx = a + dx[i], ty = b + dy[i];

        if (tx < 1 || tx > 8 || ty < 1 || ty > 8) { continue; }

        ans++;
    }

    cout << ans << endl;
    return 0;
}
