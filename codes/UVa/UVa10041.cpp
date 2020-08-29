// [UVA10041 Vito's Family] https://www.luogu.com.cn/problem/UVA10041
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int house[600];

int main()
{
    int T;
    cin >> T;

    while (T--) {
        int r;
        cin >> r;

        for (int i = 0; i < r; i++)
            cin >> house[i];

        sort(house, house + r);

        int m = house[r / 2 + (r % 2) - 1];

        int ans = 0;
        for (int i = 0; i < r; i++)
            ans += abs(m - house[i]);

        cout << ans << endl;

        memset(house, 0, sizeof(house));
    }
    return 0;
}