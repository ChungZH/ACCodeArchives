// [[USACO09OPEN]牛线Cow Line] https://www.luogu.org/problemnew/show/P2952
#include <iostream>
#include <deque>
using namespace std;

deque<int> q;

int main()
{
    int n, k, count = 1;
    cin >> n;

    char a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        if (a == 'A')
        {
            if (b == 'L')
            {
                q.push_front(count++);
            } else {
                q.push_back(count++);
            }
        }

        if (a == 'D')
        {
            cin >> k;
            if (b == 'L')
            {
                for (int i = 0; i < k; i++)
                {
                    q.pop_front();
                }
            } else {
                for (int i = 0; i < k; i++)
                {
                    q.pop_back();
                }
            } 
        }
    }

    while (!q.empty())
    {
        cout << q.front() << '\n';
        q.pop_front();
    }

    return 0;
}
