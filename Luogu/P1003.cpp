// [P1003 ÆÌµØÌº] https://www.luogu.org/problemnew/show/P1003
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    int s = -1;
    for (int i = n-1; i >= 0; i--)
    {
        if (x >= a[i][0] && x <= a[i][0] + a[i][2] && y >= a[i][1] && y <= a[i][1] + a[i][3])
        {
            s=i+1;
            break;
        }        
    }
    cout << s << endl;
    return 0;
}