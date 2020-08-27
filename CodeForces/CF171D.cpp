// [CF171D Broken checker] https://www.luogu.org/problemnew/show/CF171D
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n % 5 % 3 + 1 << endl;
    return 0;
}