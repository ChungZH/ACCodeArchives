// [CF263A Beautiful Matrix] https://www.luogu.org/problemnew/show/CF263A
#include <bits/stdc++.h>
using namespace std;

int book[6][6],
    a[6][6];
int minn = 999999999;

void dfs(int step, int x, int y)
{
    if (x == 3 && y == 3) {
        if (step < minn)
            minn = step;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int tx = x, ty = y;

        if (i == 0) {
            tx--; // 向上
        } else if (i == 1) {
            tx++; // 向下
        } else if (i == 2) {
            ty--; // 向左
        } else if (i == 3) {
            ty++; // 向右
        }

        if (tx < 1 || ty < 1 || tx > 5 || ty > 5 || book[tx][ty] == 1) {
            continue;
        } else {
            book[tx][ty] = 1;
            dfs(step + 1, tx, ty);
            book[tx][ty] = 0;
        }
    }
}

int main()
{
    int tx, ty;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> a[i][j];
            if (a[i][j]) {
                tx = i, ty = j;
            }
        }
    }

    dfs(0, tx, ty);

    cout << minn << endl;

    return 0;
}
