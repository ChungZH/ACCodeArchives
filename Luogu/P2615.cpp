// [P2615 神奇的幻方] https://www.luogu.org/problemnew/show/P2615
#include <iostream>
#include <algorithm>
      
using namespace std;

int a[45][45] = { 0 };

int main()
{
    int n;
    int k, prevX, prevY;
    
    cin >> n;
    
    a[1][n/2+1] = 1; // 首先将 1 放在第一行中间
    k = 1;
    prevX = 1, prevY = n/2+1;

    k++;

    while (k <= n*n)
    {   
        if (prevX == 1 && prevY != n)
        {
            a[prevX = n][++prevY] = k++;
        } else if (prevY == n && prevX != 1) {
            a[--prevX][prevY = 1] = k++;
        } else if (prevX == 1 && prevY == n) {
            a[++prevX][prevY] = k++;
        } else if (prevX != 1 && prevY != n) {
            if (a[prevX-1][prevY+1] == 0)
            {
                a[--prevX][++prevY] = k++;
            } else {
                a[++prevX][prevY] = k++;
            }
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
