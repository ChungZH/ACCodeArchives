// [SP7974 ACPC10A - What’s Next]
#include <cstdio>

using namespace std;

int main()
{
    int a1, a2, a3;
    while (1) {
        scanf("%d%d%d", &a1, &a2, &a3);

        if (!a1 && !a2 && !a3)
            break;

        if (a2 - a1 == a3 - a2) {
            printf("AP %d\n", a3 + (a3 - a2));
        } else {
            printf("GP %d\n", a3 * (a3 / a2));
        }
    }

    return 0;
}