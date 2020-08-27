// [CF409G On a plane] https://www.luogu.org/problemnew/show/CF409G
#include <cstdio>
using namespace std;

int main()
{
    int n;
    double t, sum2 = 0.00;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%*lf %lf", &t);
        sum2 += t;
    }

    sum2 /= n;
    printf("%.3lf", sum2 + 5.000);

    return 0;
}