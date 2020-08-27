// [UVA679 小球下落 Dropping Balls] https://www.luogu.org/problemnew/show/UVA679
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n, D, I;
    while (scanf("%d", &n) == 1) {
        if (n == -1)
            break;

        for (int a = 0; a < n; a++) {
            scanf("%d%d", &D, &I);

            int k = 1;
            for (int i = 0; i < D - 1; i++)
                if (I % 2) {
                    k = k * 2;
                    I = (I + 1) / 2;
                } else {
                    k = k * 2 + 1;
                    I /= 2;
                }
            printf("%d\n", k);
        }
    }
    return 0;
}