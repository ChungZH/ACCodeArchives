// [AT870 DEAD END] https://www.luogu.org/problemnew/show/AT870
#include <iostream>
using namespace std;


int main()
{
    int a[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == a[i][j+1])
            {
                cout << "CONTINUE\n";
                return 0;
            }
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] == a[i-1][j])
            {
                cout << "CONTINUE\n";
                return 0;
            }
        }
    }
    cout << "GAMEOVER\n";
    return 0;
}