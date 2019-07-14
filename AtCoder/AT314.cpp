// [AT314 元気にお使い！高橋君] https://www.luogu.org/problemnew/show/AT314
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n;
    double sum = 0.00;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        sum += a*b;
    }
    sum *= 1.05;

    cout << (int)sum << endl;
    return 0;
}