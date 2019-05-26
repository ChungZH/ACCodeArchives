// [P1152 欢乐的跳] https://www.luogu.org/problemnew/show/P1152
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[n], cha[n-1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
        {
            cha[i-1] = abs(a[i]-a[i-1]);
        }
    }

    sort(cha, cha+n-1);

    for (int i = 0; i < n-1; i++)
    {
        if (cha[i] != i+1)
        {
            cout << "Not jolly" << endl;
            return 0;   
        }
    }

    cout << "Jolly" << endl;
    return 0;
}
