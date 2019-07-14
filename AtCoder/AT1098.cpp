// [AT1098 チーム作り] https://www.luogu.org/problemnew/show/AT1098
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    n %= 40;
    if (n <= 20) cout << n << endl;
    else cout << 20-(n-20)+1 << endl;
    return 0;
}