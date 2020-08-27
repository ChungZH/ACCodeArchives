// [P1165 日志分析] https://www.luogu.org/problemnew/show/P1165
#include <algorithm>
#include <iostream>
using namespace std;

int sa[200005], top;
int n, maxx, c, x;

int main()
{
    cin >> n;
    sa[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == 0) {
            cin >> x;
            top++;
            sa[top] = max(sa[top - 1], x);
        } else if (c == 1) {
            if (top != 0) {
                top--;
            }
        } else {
            cout << sa[top] << endl;
        }
    }
    return 0;
}