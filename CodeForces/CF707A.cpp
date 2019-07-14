// [CF707A Brain's Photos] https://www.luogu.org/problemnew/show/CF707A
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    char c;
    bool flag = false;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;

            if (c != 'B' && c != 'W' && c != 'G')
            {
                flag = true;
            }
        }
    }

    if (!flag)
    {
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }
    return 0;
}