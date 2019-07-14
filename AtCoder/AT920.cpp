// [AT920 九九足し算] https://www.luogu.org/problemnew/show/AT920
#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    n = 2025 - n;

    for (int i = 1; i <= n && i < 10; i++)
    {
        int j = n/i;
        if (i * j == n && j < 10)
        {
            printf("%d x %d\n", i, j);
        }
    }

    return 0;
}