// [CF948A Protect Sheep] https://www.luogu.org/problemnew/show/CF948A
#include <iostream>

using namespace std;

char mapp[502][502];

int main()
{
    int r, c;
    bool flag = false;

    cin >> r >> c;

    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            cin >> mapp[i][j];

    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            if (mapp[i][j] == 'S')
                if (mapp[i + 1][j] == 'W' || mapp[i][j + 1] == 'W' || mapp[i - 1][j] == 'W' || mapp[i][j - 1] == 'W')
                    flag = true;

    if (flag) {
        cout << "No\n";
    } else {
        cout << "Yes\n";

        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                if (mapp[i][j] == 'S') {
                    if (mapp[i + 1][j] != 'S')
                        mapp[i + 1][j] = 'D';
                    if (mapp[i - 1][j] != 'S')
                        mapp[i - 1][j] = 'D';
                    if (mapp[i][j + 1] != 'S')
                        mapp[i][j + 1] = 'D';
                    if (mapp[i][j - 1] != 'S')
                        mapp[i][j - 1] = 'D';
                }
            }
        }

        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++)
                cout << mapp[i][j];
            cout << '\n';
        }
    }

    return 0;
}