#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0, s = 0;

    while (n > s) {
        s += ++i;
    }

    if (i % 2 == 1) {
        cout << s - n + 1 << '/' << i + n - s << endl;
    } else {
        cout << i + n - s << '/' << s - n + 1 << endl;
    }

    return 0;
}
