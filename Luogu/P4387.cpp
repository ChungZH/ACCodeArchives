// [P4387 【深基15.习9】验证栈序列] https://www.luogu.com.cn/problem/P4387
#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n, cur = 0;
        cin >> n;

        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            s.push(a[i]);
            while (s.top() == b[cur])
            {
                s.pop();
                cur++;

                if (s.empty()) break; 
            }
        }

        if (s.empty()) cout << "Yes\n";
        else cout << "No\n";

        // 清空栈
        while (!s.empty()) s.pop();
    }
    return 0;
}