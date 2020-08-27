// [AT2653 Snake Toy] https://www.luogu.org/problemnew/show/AT2653
#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n, cmp);

    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    cout << sum << endl;
    return 0;
}
