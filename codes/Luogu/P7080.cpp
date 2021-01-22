// [P7080 [NWRRC2013]Ballot Analyzing Device] https://www.luogu.com.cn/problem/P7080
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
int n, m;
struct player {
    string name;
    int votes;
    int idx;
    double p;
} a[15];
bool cmp(player a, player b)
{
    if (a.votes != b.votes)
        return a.votes > b.votes;
    return a.idx < b.idx;
}
double getp(int x)
{
    double t = x * 1.0 / m * 10000;
    return floor(t + 0.5) / 100.0;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i].name;
        a[i].votes = 0;
        a[i].idx = i;
    }

    int wxp = 0;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;

        int xnt = 0, flg = -1;
        for (int j = 0; j < s.length(); j++)
            if (s[j] == 'X') {
                if (xnt == 0)
                    flg = j;
                xnt++;
            }
        if (xnt != 1)
            wxp++;
        else
            a[flg].votes++;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) {
        printf("%s %.2f%%\n", a[i].name.c_str(), getp(a[i].votes));
    }
    printf("Invalid %.2f%%\n", getp(wxp));
    return 0;
}
