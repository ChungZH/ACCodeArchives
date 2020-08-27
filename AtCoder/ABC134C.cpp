// [[ABC134C] Exception Handling] https://www.luogu.com.cn/problem/AT4843
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int N;
    scanf("%d", &N);

    int amax, asec, a[N + 3];
    int amaxi, aseci;
    amax = asec = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (a[i] > amax) {
            amax = a[i];
            amaxi = i;
        }
    }

    for (int i = 0; i < N; i++) {
        if (i == amaxi)
            continue;
        if (a[i] > asec) {
            asec = a[i];
            aseci = i;
        }
    }

    for (int i = 0; i < N; i++) {
        if (i == amaxi) {
            printf("%d\n", asec);
        } else {
            printf("%d\n", amax);
        }
    }
    return 0;
}