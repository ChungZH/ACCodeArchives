// [CF678A Johny Likes Numbers] https://www.luogu.org/problemnew/show/CF678A
#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    
    if (n % k == 0)
    {
        cout << n+k << endl;
    } else {
        cout << n/k*k + k << endl;
    }
    return 0;
}
