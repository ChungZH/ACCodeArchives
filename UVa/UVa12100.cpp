// [UVa12100 打印队列 Printer Queue] https://www.luogu.org/problem/UVA12100
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    queue<int> q1, q2;
    priority_queue<int, vector<int>, less<int> > q3;

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        while (!q1.empty()) q1.pop();
        while (!q2.empty()) q2.pop();
        while (!q3.empty()) q3.pop();

        int ans = 0;
        int n, top, t;
        cin >> n >> top;

        for (int i = 0; i < n; i++)
        {
            cin >> t;
            q1.push(t);
            q2.push(i);
            q3.push(t);
        }

        while (!q1.empty())
        {
            int num = q1.front(), pos = q2.front();
            q1.pop();
            q2.pop();

            if (num == q3.front())
            {
                q3.pop();
                ans++;
                if (top == pos)
                {
                    cout << ans << endl;
                    break;
                }
            } else {
                q1.push(num);
                q2.push(pos);
            }
        }
    }
    return 0;
}