// [CF440A Forgotten Episode] https://www.luogu.org/problemnew/show/CF440A
#include <iostream>
#include <cstring>
using namespace std;

bool a[100001];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        int t;
        cin >> t;
        a[t] = 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}