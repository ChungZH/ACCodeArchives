// [P5082 成绩] https://www.luogu.org/problemnew/show/P5082
#include <iostream>
#include <algorithm>
      
using namespace std;

int main()
{
    long long n, asum = 0, bsum = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long a;
        scanf("%lld", &a);
        asum += a;
    }
    for (int i = 0; i < n; i++)
    {
        long long b;
        scanf("%lld", &b);
        bsum += b;
    }

    ans = asum * 3 - bsum * 2;

    printf("%.6f\n", ans/(double)(asum-bsum));


    return 0;
}
