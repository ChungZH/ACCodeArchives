// [#10005. 「一本通 1.1 练习 1」数列极差] https://loj.ac/problem/10005
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int> > sq;
priority_queue<int> bq;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sq.push(x);
        bq.push(x);
    }

    while (sq.size() > 1)
    {
        int a = sq.top(); sq.pop();
        int b = sq.top(); sq.pop();
        sq.push(a*b+1);
    }

    while (bq.size() > 1)
    {
        int a = bq.top(); bq.pop();
        int b = bq.top(); bq.pop();
        bq.push(a*b+1);
    }

    cout << sq.top() - bq.top() << endl;
    return 0;
}