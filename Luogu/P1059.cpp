// [P1059 明明的随机数] https://www.luogu.org/problemnew/show/P1059
#include <iostream>
using namespace std;
int main()
{
    int n, u = 0;
    cin >> n;
    int a[1001] = { 0 };
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (a[temp] == 1)
            continue;
        a[temp] = 1;
        u++;
    }

    cout << u << endl;

    for (int i = 0; i < 1001; i++) {
        if (a[i] == 1)
            cout << i << " ";
    }
    return 0;
}