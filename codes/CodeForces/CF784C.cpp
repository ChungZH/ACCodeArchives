// [CF784C INTERCALC] https://www.luogu.org/problemnew/show/CF784C
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp, maxx = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > maxx)
            maxx = temp;
    }

    cout << (maxx ^ temp) << endl;
    return 0;
}
