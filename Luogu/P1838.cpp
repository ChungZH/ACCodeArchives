// [P1838 三子棋I] https://www.luogu.org/problemnew/show/P1838
#include <iostream>
#include <algorithm>

using namespace std;

int a[3][3];

int main()
{
    string s;
    cin >> s;

    const int slen = s.length();
    int temp;

    // 模拟棋盘当前状况
    for (int i = 0; i < slen; i++)
    {
        temp = s[i] - '0' - 1;
        a[temp/3+1][temp%3+1] = i%2;
        // 1:uim
        // 0:xiaoa
    }

    // 开始判断
    for (int i = 1; i <= 3; i++)
    {
        // 横向判断
        if (a[i][1] == a[i][2] && a[i][2] == a[i][3])
        {
            if (a[i][1] == 0) // xiaoa
            {
                cout << "xiaoa wins." << endl;
                return 0;
            } else {
                cout << "uim wins." << endl;
                return 0;
            }
        }

        // 纵向判断
        if (a[1][i] == a[2][i] && a[2][i] == a[3][i])
        {
            if (a[1][i] == 0) // xiaoa
            {
                cout << "xiaoa wins." << endl;
                return 0;
            } else {
                cout << "uim wins." << endl;
                return 0;
            }
        }
    }

    // 斜向判断
    if (a[1][1] == a[2][2] && a[2][2] == a[3][3])
    {
        if (a[1][1] == 0) // xiaoa
        {
            cout << "xiaoa wins." << endl;
            return 0;
        } else {
            cout << "uim wins." << endl;
            return 0;
        }
    }

    if (a[1][3] == a[2][2] && a[2][2] == a[3][1])
    {
        if (a[1][3] == 0) // xiaoa
        {
            cout << "xiaoa wins." << endl;
            return 0;
        } else {
            cout << "uim wins." << endl;
            return 0;
        }
    }
    
    cout << "drew." << endl;

    return 0;
}
