// [CF758A Holiday Of Equality] https://www.luogu.org/problemnew/show/CF758A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, maxi = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > maxi)
            maxi = temp;
        sum += temp;
    }

    cout << maxi * n - sum << endl;

    return 0;
}
