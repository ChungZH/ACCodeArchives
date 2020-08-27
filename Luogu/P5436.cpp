// [P5436 【XR-2】缘分] https://www.luogu.org/problemnew/show/P5436
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    while (n--) {
        long long a;
        cin >> a;
        if (a == 1)
            cout << 1 << endl;
        else
            cout << a * (a - 1) << endl;
    }
    return 0;
}