// [P1577 切绳子] https://www.luogu.com.cn/problem/P1577
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int n, k;
double l[10005], sum;
bool check(double x)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num += (int)(l[i] / x);
    }
    return num >= k;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
        sum += l[i];
    }
    double L = 0, R = sum;
    for (int i = 0; i < 100; i++)
    {
        double M = (L+R)/2;
        if (check(M))
        {
            L = M;
        } else {
            R = M;
        }
    }

    printf("%.2f\n", floor(R * 100) / 100);
    return 0;
}
