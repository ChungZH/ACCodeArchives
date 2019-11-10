// [SP27 SBANK - Sorting Bank Accounts] https://www.luogu.org/problem/SP27
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int n;
        scanf("%d", &n);

        string a[n];
        getchar();
        for (int j = 0; j < n; j++)
        {
            getline(cin, a[j]);
        }
        if (i == T-1) a[n-1] += ' ';
        sort(a, a+n);

        int cnt = 1;
        for (int j = 1; j < n; j++)
        {
            if (a[j] == a[j-1])
            {
                cnt++;
            } else {
                cout << a[j-1] << cnt << '\n';
                cnt = 1;
            }
        }
        cout << a[n-1] << cnt << '\n';
    }
    return 0;
}