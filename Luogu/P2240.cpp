// [P2240 【深基12.例1】部分背包问题] https://www.luogu.com.cn/problem/P2240
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    double m, v, p;
};
bool cmp(node a, node b) { return a.p > b.p; }
double sum, c;
int main()
{
    int n;
    cin >> n >> c;

    node a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].m >> a[i].v;
        a[i].p = a[i].v / a[i].m;
    }
    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) {
        if (a[i].m <= c) {
            c -= a[i].m;
            sum += a[i].v;
        } else {
            sum += c * a[i].p;
            break;
        }
    }

    printf("%.2f", sum);
    return 0;
}
