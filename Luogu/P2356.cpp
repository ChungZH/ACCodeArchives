// [P2356 µØ÷È”Œœ∑] https://www.luogu.org/problemnew/show/P2356

#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

bool flag = false;
int n;
int a[1000][1000];
int sumX[1000], sumY[1000];

int main()
{
    int maxx = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0 && flag == false) 
            { 
                flag = true;
            }
            sumX[i] += a[i][j];
            sumY[j] += a[i][j];
        }

    }

    if (flag == false)
    {
        cout << "Bad Game!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                maxx = max(sumX[i]+sumY[j], maxx);
            }
        }
    }

    cout << maxx << endl;

    return 0;
}
