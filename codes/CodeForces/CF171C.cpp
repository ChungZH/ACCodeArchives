// [CF171C A Piece of Cake] https://www.luogu.org/problemnew/show/CF171C
#include <iostream>
using namespace std;

int main()
{
    int n, t;
    long long sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;
        sum += t * (i + 1);
    }

    cout << sum << endl;

    return 0;
}