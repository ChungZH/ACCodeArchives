// [CF652B z-sort] https://www.luogu.org/problemnew/show/CF652B
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int a[1001];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);

    int i = 0, j = n-1;

    while (i < j)
        cout << a[i++] << " " << a[j--] << " ";
    
    if (n % 2 != 0) cout << a[i] << endl;
    return 0;
}