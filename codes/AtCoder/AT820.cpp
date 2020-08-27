// [AT820 おいしいたこ焼きの食べ方] https://www.luogu.org/problemnew/show/AT820
#include <iostream>
using namespace std;

int main()
{
    int n, minn = 10000000, temp;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp < minn)
            minn = temp;
    }
    cout << minn << endl;
    return 0;
}
