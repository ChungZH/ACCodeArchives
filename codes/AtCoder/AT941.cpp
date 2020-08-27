// [AT941 小石を取るゲーム] https://www.luogu.org/problemnew/show/AT941
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    n %= (a + b);

    if (n == 0) {
        cout << "Bug" << endl;
    } else if (n <= a) {
        cout << "Ant" << endl;
    } else {
        cout << "Bug" << endl;
    }
    return 0;
}
