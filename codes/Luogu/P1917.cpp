// [P1917 三子棋II] https://www.luogu.org/problemnew/show/P1917
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    char matrix[4][4];
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] != '-')
                sum++;
        }
    }

    if (matrix[1][2] == 'X' || matrix[2][1] == 'X' || matrix[2][3] == 'X' || matrix[3][2] == 'X') {
        cout << "xiaoa will win." << endl;
    } else {
        cout << "Dont know." << endl;
    }

    cout << sum << endl;

    return 0;
}
