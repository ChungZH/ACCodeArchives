// [P1824 进击的奶牛] https://www.luogu.com.cn/problem/P1824
#include <iostream>
#include <algorithm>
using namespace std;
int n, m, x[100005];
bool check(int d)
{
    int last = 0;
    for (int i = 1; i < m; i++)
    {
        int crt = last + 1;
        while (crt < n && x[crt] - x[last] < d)
        {
            crt++;
        }
        if (crt == n)
        {
            return false;
        }
        last = crt;
    }
    return true;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    
    sort(x, x+n);

    int L = 0, R = x[n-1];
    while (L + 1 < R)
    {
        int M = (L+R)/2;
        if (check(M))
        {
            L = M;
        } else {
            R = M;
        }
    }

    cout << L << endl;
    return 0;
}