// [P5601 小D与笔试] https://www.luogu.org/problem/P5601
#include <bits/stdc++.h>
using namespace std;

struct prob {
    string s;
    string a;
} p[103];

struct sele {
    string s;
    string ans[4];
} a[103];

int main()
{
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> p[i].s >> p[i].a;
    }

    for (int i = 0; i < q; i++) {
        cin >> a[i].s >> a[i].ans[0] >> a[i].ans[1] >> a[i].ans[2] >> a[i].ans[3];
    }

    for (int i = 0; i < q; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i].s == p[j].s) {
                if (p[j].a == a[i].ans[0])
                    putchar('A');
                else if (p[j].a == a[i].ans[1])
                    putchar('B');
                else if (p[j].a == a[i].ans[2])
                    putchar('C');
                else if (p[j].a == a[i].ans[3])
                    putchar('D');
            }
        }
        putchar('\n');
    }
    return 0;
}
