// [UVA514 铁轨 Rails] https://www.luogu.org/problemnew/show/UVA514
#include <cstdio>
#include <stack>
using namespace std;

int n, target[1010];

int main()
{
    while (scanf("%d", &n) == 1 && n) {
        stack<int> s;
        while (1) {
            int A, B, ok;
            scanf("%d", &target[1]);
            if (!target[1])
                break;

            for (int i = 2; i <= n; i++)
                scanf("%d", &target[i]);

            A = B = ok = 1;

            while (B <= n) {
                if (A == target[B]) {
                    A++;
                    B++;
                } else if (!s.empty() && s.top() == target[B]) {
                    s.pop();
                    B++;
                } else if (A <= n)
                    s.push(A++);
                else {
                    ok = 0;
                    break;
                }
            }
            printf("%s\n", ok ? "Yes" : "No");
        }
        putchar('\n');
    }
    return 0;
}