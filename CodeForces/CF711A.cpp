// [CF711A Bus to Udayland] https://www.luogu.org/problemnew/show/CF711A
#include <iostream>

using namespace std;

int n;
bool flag, flag1;

int main()
{
    cin >> n;

    char c[n * 2][2], tempChar;

    for (int i = 0; i < n * 2; i++) {
        cin >> c[i][0] >> c[i][1];
        if (i % 2 == 0) {
            cin >> tempChar;
        }
        if (c[i][0] == 'O' && c[i][1] == 'O') {
            flag = true;
            if (!flag1)
                c[i][0] = c[i][1] = '+', flag1 = true;
        }
    }

    if (flag) {
        cout << "YES" << endl;
        for (int i = 0; i < n * 2; i++) {
            cout << c[i][0] << c[i][1];
            if (i % 2 == 0) {
                cout << '|';
            } else {
                cout << endl;
            }
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
