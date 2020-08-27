// [CF1157B Long Number] https://www.luogu.com.cn/problem/CF1157B

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n+3];
    for (int i = 1; i <= n; i++) scanf("%1d", &a[i]);

    int rep[10];
    for (int i = 1; i <= 9; i++) cin >> rep[i];

    for (int i = 1; i <= n; i++)
    {
        if (a[i] < rep[a[i]])
        {
            for (int j = i; j <= n && a[j] <= rep[a[j]]; j++)
            {
                a[j] = rep[a[j]];
            }
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }

    cout << '\n';
    return 0;
}