// [UVA11988 破损的键盘 Broken Keyboard (a.k.a. Beiju Text)] https://www.luogu.org/problemnew/show/UVA11988
#include <cstdio>
#include <cstring>

using namespace std;

const int maxn = 100000 + 5;
int last, cur, next[maxn]; // 光标位于 cur 号字符的后面
char s[maxn];

int main()
{
    while (scanf("%s", s + 1) == 1) {
        int n = strlen(s + 1); // 输入保存在 s[1]，s[2]··· 中
        last = cur = 0;
        next[0] = 0;

        for (int i = 1; i <= n; i++) {
            char ch = s[i];
            if (ch == '[') // Home
            {
                cur = 0;
            } else if (ch == ']') { // end
                cur = last;
            } else {
                next[i] = next[cur];
                next[cur] = i;
                if (cur == last)
                    last = i; // 更新“最后一个字符”编号
                cur = i; // 移动光标
            }
        }

        for (int i = next[0]; i != 0; i = next[i])
            putchar(s[i]);
        putchar('\n');
    }

    return 0;
}