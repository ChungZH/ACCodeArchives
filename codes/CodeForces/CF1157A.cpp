// [CF1157A Reachable Numbers] https://www.luogu.com.cn/problem/CF1157A

#include <iostream>
#include <set>

using namespace std;

set<int> s;

int main()
{
    int n;
    cin >> n;
    s.insert(n);

    while (1) {
        n++;
        while (n % 10 == 0)
            n /= 10;

        if (s.count(n)) {
            break;
        } else {
            s.insert(n);
        }
    }

    cout << s.size() << endl;

    return 0;
}