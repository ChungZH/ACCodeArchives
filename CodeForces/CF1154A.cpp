// [CF1154A Restoring Three Numbers] https://www.luogu.org/problemnew/show/CF1154A
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    sort(a, a+4);

    printf("%d %d %d\n", a[3]-a[1], a[3]-a[2], a[3]-a[0]);
    return 0;
}
