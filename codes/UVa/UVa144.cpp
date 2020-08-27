// [UVA144 Student Grants] https://www.luogu.com.cn/problem/UVA144
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <queue>
using namespace std;
struct Node {
    int id;
    int money;
};
int main()
{
    int n, k;
    while (cin >> n >> k) {
        if (!n && !k)
            break;

        queue<Node> q;
        for (int i = 0; i < n; i++)
            q.push(Node { i + 1, 0 });

        int last = 0, cur = 0;
        while (!q.empty()) {
            int t;
            if (last > 0) {
                t = last;
            } else {
                cur++;
                if (cur > k)
                    cur = 1;
                t = cur;
            }

            Node curNode = q.front();
            q.pop();

            if (curNode.money + t >= 40) {
                last = curNode.money + t - 40;
                cout << setw(3) << curNode.id;
            } else {
                curNode.money += t;
                q.push(curNode);
                last = 0;
            }
        }
        cout << '\n';
    }
    return 0;
}