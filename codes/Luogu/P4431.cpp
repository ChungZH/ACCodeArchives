// [P4431 [COCI2017-2018#2] ​Košnja] https://www.luogu.org/problemnew/show/P4431
#include <iostream>

using namespace std;

int main()
{
    int k;
    scanf("%d", &k);

    while (k--) {
        int n, m;
        scanf("%d%d", &n, &m);

        printf("%d\n", (min(n, m) - 1) * 2);
    }

    return 0;
}
