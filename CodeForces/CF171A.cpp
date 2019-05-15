// [CF171A Mysterious numbers - 1] https://www.luogu.org/problemnew/show/CF171A
#include <cstdio>
using namespace std;

int main()
{
    int a, b, c = 0;
    scanf("%d%d", &a, &b); 
    
    while (b > 0)
    {
        c *= 10; 
        c += b % 10;
        b /= 10;
    }

    printf("%d", a + c);
    return 0;
}
