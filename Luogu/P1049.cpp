// [P1049 装箱问题] https://www.luogu.org/problem/P1049
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int v, n;
    cin >> v >> n;

    int f[v+3];
    int w[n+3];
    
    memset(f, 0, sizeof(f));
    memset(w, 0, sizeof(w));

    for (int i = 0; i < n; i++)
        cin >> w[i];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = v; j >= w[i]; j--)
        {
            f[j] = max(f[j], f[j-w[i]]+w[i]);
        }
    }

    cout << v-f[v] << endl;
    return 0;
}




